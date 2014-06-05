# include <stdio.h>

/* Elabore um programa que faça leitura de varios numeros inteiros, ate que e digite um numero negativo.
O programa tem que retornar o maior e o menor numero lido.*/

void Func_compare(){
    float num1,num2,cont;
    printf("Entre com um numero: \n");
    scanf("%f", &cont);
    num1 = num2 = cont;
    while (cont >= 0){
        printf("Entre com um numero: \n");
        scanf("%f", &cont);
        if (cont >= 0){
            if (cont > num1){
                num1 = cont;
            }
            if (cont < num2){
                num2 = cont;
            }
        }
    }
    printf("Voce entrou com um numero negativo, o maior numero entrado eh: %1.f.\n O menor eh: %1.f.\n",num1,num2);
}

void main(){

	 Func_compare();

}

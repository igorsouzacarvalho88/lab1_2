# include <stdio.h>
# include <stdbool.h>

int Demonstra(int Soma, int Cont, int Maior,int Menor, int Cont2, int Soma2){
	Cont--;
    Cont2--;
    printf("A soma dos numeros digitados foi-> %d\n",Soma);
    printf("A quantidade de numeros digitados foi-> %d\n",(Cont));
    printf("A media dos numeros digitados foi-> %.2f\n",((float)Soma/Cont));
    printf("O maior numero digitado foi-> %d\n",Maior);
    printf("O menor numero digitado foi-> %d\n",Menor);
    printf("A media dos numeros pares foi-> %d\n",(Soma2/Cont2));
	
}
void calcular(){
    int x=1,soma=0,soma2=0,cont=0,maior=0,menor=0,cont2=0,c=0;
    while (x!=0){
        printf("Entre com um numero: \n");
        scanf("%d",&x);
        if (c==0){
            maior = x;
            menor = x;
            c += 1;
        }
        soma += x;
        cont++;
        if (x>maior){
            maior = x;
        }
        if ((x<menor)&&(x!=0)){
            menor = x;
        }
        if (x%2 == 0){
            soma2 += x;
            cont2++;
        }
    }

    Demonstra(soma,cont,maior,menor,cont2,soma2);
}

void main(){
    calcular();
}

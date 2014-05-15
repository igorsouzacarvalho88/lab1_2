/*1. Efetuar a leitura de um numero real e apresentar o resultado do quadrado desse 
numero*/
#include <stdio.h>
float quad(int num1){
return(num1*num1);
}
int main(){
	float Num1;
	printf("DIGITE UM VALOR REAL:\n");
	scanf("%f", &Num1);
	printf("\n O QUADRADO DO NUMERO = %.2f",quad(Num1));
}

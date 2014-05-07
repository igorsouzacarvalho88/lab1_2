/*1. Efetuar a leitura de um numero real e apresentar o resultado do quadrado desse 
numero.*/
#include<stdio.h>
int quadrado (int num){
	return (num*num);
	
}

int  main(){
int Num;
	printf("Digite o numero\n");
	scanf("%d",&Num);
	printf("result: %d",quadrado(Num));
}

/*3. Efetuar a leitura de trés valores e apresentar como resultado final a soma dos 
quadrados dos três valores lidos*/
#include <stdio.h>
int soma_quadrados(int N1,int N2,int N3){
	return ((N1*N1)+(N2*N2)+(N3*N3));
}
int main(){
	int num1,num2,num3;
	printf("Digite tres numeros inteiros\n");
	scanf("%d \n%d \n%d",&num1,&num2,&num3);
	printf("O reultado encontrado foi = %d\n",soma_quadrados(num1,num2,num3));
	return(0);
}

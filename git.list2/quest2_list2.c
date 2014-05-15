/*2. Ler um numero e retorne seu antecessor e seu sucessor*/
#include <stdio.h>
int sucessor(int num){
	return(num+1);}
int antecessor(int num){
	return(num-1);
}
int main(){
	int N;
	printf("Digite um numero inteiro:\n");
	scanf("%d",&N);
	printf("\n O numero digitado foi = %d \n",N);
	printf("\n Anteessor do numero = %d\n ",antecessor(N));
	printf("\nSucessor do numero = %d ",sucessor(N));
	
	return(0);
}

/*Ler um numero e retorne seu antecessor e seu sucessor*/
#include<stdio.h>
 int sucess(int prox){
 	return(++prox);
 }
  int antec(int prox){
 	return(--prox);
 }
 int main(){
 int p;
 printf("Digite o valor\n");
 scanf("%d",&p);
 printf("O sucessor:%d\n",sucess(p));
 printf("O antecessor:%d\n",antec(p));
 }

 

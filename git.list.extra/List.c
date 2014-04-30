#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>


typedef struct{
	int chave[10];
	int nelement;
}listaint;


 int main(){
	int z;
	
	printf("Digite numeros inteiros positivos para o vetor\n\n");
	scanf("%d",z);
	
	printf("%d",&z);
	
	return true;
}

/*bool consulta(listaint l; int x){
int i;
for(i=0; (i<l.nelement;) &&(l.chave[i]!=x); i++)
	return(i==l.nelement? false:true);	
}*/

/*Fa�a um programa para ler um numero inteiro, positivo de tr�s d�gitos, e gerar outro
numero formado pelos d�gitos invertidos do numero lido.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>  

int main(){
       char string[50],auxiliar[50];
       int y,x;
      
	   printf("Digite um numero inteiro com 3 digitos:\n\n->");
       scanf("%s",string);  
       x=strlen(string)-1;    //strlen calcula da quantidade de caracteres que tem a string
       for(y=0;string[y]!='\0';y++)  //Repete enquanto nao chegar ao final da string
	   {       
       auxiliar[x]=string[y]; 
       x--;      
       }
       
	   auxiliar[y]='\0';   //Neste caso n�o sendo executado pode ser que n�o se tenha leitura errada
       
	   strcpy(string,auxiliar);  //Copia para a vari�vel string o conte�do da vari�vel auxiliar
		
		printf("\n O valor invertido foi: \n\n-> %s\n\n",string);
	
		return(0);
}

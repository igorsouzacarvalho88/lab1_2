/*Fa�a um programa para ler um numero inteiro, positivo de tr�s d�gitos, e gerar outro
numero formado pelos d�gitos invertidos do numero lido.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>  
int main(){
       char string[50],auxiliar[50];
       int a,b;
       printf("Digite um numero inteiro com 3 digitos:\n->");
       gets(string);  //Armazena o numero na vari�vel string
       b=strlen(string)-1;    //strlen calcula a quantidade de caracteres que tem a string
       for(a=0;string[a]!='\0';a++){        //Repete enquanto nao chegar ao final da string
       auxiliar[b]=string[a]; 
       b--;      
       }
       auxiliar[a]='\0';      //Se nao colocar essa parte, o programa pode mostrar LIXO
       strcpy(string,auxiliar);    //Copia para a vari�vel string o conte�do da vari�vel auxiliar
		printf("\nNUMERO INVERTIDO = %s\n\n",string);
		system("pause");
}

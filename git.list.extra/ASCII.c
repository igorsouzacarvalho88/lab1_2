/*Escreva um programa que leia um caracter digitado pelo usuário, 
imprima o caracter digitado e o código ASCII correspondente a este caracter.*/
#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>
#include <ctype.h>

main(){

char x;
system ("cls");
x='\0';
printf("Digite um caracter qualquer:\n");
scanf("%c",&x);
printf("O caracter digitado foi: %c\n",x);
printf("O caracter em, codigo ASCII foi: %d\n",x);
if (isascii(x))
      printf("O caracter contém o valor ASCII %d.\n",x);
}

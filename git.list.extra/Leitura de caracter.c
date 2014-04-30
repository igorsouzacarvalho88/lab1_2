/*Escreva um programa que leia um caracter digitado pelo usuário, 
imprima o caracter digitado e o código ASCII correspondente a este caracter.*/
#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
char ch, RESP = 'S' ;
do
{
system ("cls");
ch ='\0';
printf("\n Digite um Caracter: \n"); 
scanf("%c",&ch);
printf("\n O Caracter Digitado foi: %c", ch);
printf("\n O Codigo ASCII e': %d\n", ch);

printf ("\n DESEJA CONTINUAR (S\N) ?" );
RESP=toupper(getche());

}
while (RESP=='S');

printf("\n");
system("PAUSE");	
return 0;
}



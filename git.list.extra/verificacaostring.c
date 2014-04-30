 /*Escreva um programa que leia duas strings e as coloque na tela. 
 Imprima também a segunda letra de cada string.*/
 #include <stdio.h>

int main() 
{ 
    char x[25], y[25]; 
    //printf(" Digite a primeira string: "); 
    //scanf("%c",&x);         /* Le string 1*/ 
    printf("\n Digite a segunda string: "); 
    scanf("%c",&y);         /* Lê string 2*/ 
    //printf("\n\n As strings lidas sao:\n %c \n %c", x, y); /* Imprime as strings*/ 
    //printf("\n\n 'A primeira string e': %c", &x[1]); 
      printf("\n 'A segunda string e': %c", &y[2]); 
         return 0;
} 
 

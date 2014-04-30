#include<stdio.h> 

 int main() 
 { 
         printf("Programa basico, que le sua string, troca os caracteres 'a' por 'b', fornece a string modificada e o numero de caracteres trocados!"); 

         char string[100]; 
         int x, cont; 

         printf("\n\nEntre com uma string... "); 
         gets (string); 
         printf("String digitada:\n%s",string); 

         cont=0; 

         for(x=0;string[x]!='\0';x++) 
         { 
                 if(string[x]=='a') 
                 cont=cont+1; 
         } 

         printf("\n\nQuantidade de caracteres 'a' na frase= %d",cont); 

         for(x=0;string[x]!='\0';x++) 
         { 
                 if(string[x]=='a') 
                 string[x]='b'; 
         } 

         printf("\n\n String trocada os caracters 'a' por 'b'=%s",string); 

         int troca; 

         if(string[x]=='b') 
                  troca=troca+1; 

         printf("\n\nO numero de caracteres trocados eh: %d",troca); 
         while(1); 
         return(0); 
 }  

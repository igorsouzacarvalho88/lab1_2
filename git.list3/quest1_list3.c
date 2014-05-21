#include <stdio.h> 
int valores(int seq){ 
int max, minimo;
 max==10;
 minimo==0;

    if (seq>=max){
    
        max=seq;   
}
    else{ 
        if ((seq <=minimo)&& (seq>=0)) 
        minimo=seq;   
    } 

    if (seq<0){ 
        printf("O maior numero da sequencia = \n\n->%d\n\n",max); 
        printf("\nO menor numero da sequencia = \n\n->%d\n\n",minimo); 
    } 
} 
int main(){ 
    int x; 
    x=0; 
    printf("Digite os numeros\n\n"); 
    while (x>=0){ 
        scanf("%d",&x); 
        valores(x); 
    } 
    return 0 ; 
} 



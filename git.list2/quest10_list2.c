/*Escreva o menu de op��es abaixo, leia a op��o do usu�rio e execute a opera��o 
escolhida Escreva uma mensagem de erro se a op��o escolhida for invalida. 
1- Soma de 2 n�meros. 
2- Diferen�a entre 2 n�meros (maior pelo menor). 
3- Produto entre 2 n�meros. 
4- Divis�o entre 2 n�meros (o denominador n�o pode ser zero).*/
  
#include<stdio.h> 

int menu (int opcao){ 
    switch (opcao){ 
        
		int num1,num2; 
        
		case 1:  
		
            printf("Digite dois numeros inteiros\n"); 
            scanf("%d%d",&num1,&num2); 
            printf("A Soma dos dois valores foi :\n -> %d ",(num1+num2)); 
            break; 
        
		case 2: 
		
            if (num1>num2){ 
                printf("Digite dois numeros inteiros\n"); 
                scanf("%d%d",&num1,&num2); 
                printf("Diferen�a dos dois valores foi :\n -> %d ",(num1-num2));  
                break; 
            } 
            else { 
                printf("Digite dois numeros inteiros\n"); 
                scanf("%d%d",&num1,&num2); 
                printf("Diferenca dos dois valores foi :\n-> %d ",(num2-num1));  
            break; 
        
		case 3: 
		
            printf("Digite dois numeros inteiros\n"); 
            scanf("%d%d",&num1,&num2); 
            printf("Produto dos dois valores foi :\n-> %d ",(num1*num2)); 
            break; 
        
		case 4:
		  
            printf("Digite dois numeros inteiros\n"); 
            scanf("%d%d",&num1,&num2);
		if (num2!=0){  
            printf("Divisao dos dois valores foi :\n-> %d ",(num1/num2)); 
            break;   
        } 
        
		else{ 
            printf("Divisao impossivel ->%d",(num1/num2));   
            break; 
        } 
    } 
} 
} 
int main(){ 
    int OPCAO; 
    printf("        MENU\n1- Soma de 2 numeros\n2- Diferenca entre 2 numeros\n3- Produto entre 2 numeros\n4- Divisao entre 2 numeros\n-> "); 
    scanf("%d",&OPCAO); 
    menu(OPCAO); 
} 
     

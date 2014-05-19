//Quest 12
#include <stdio.h>
#include<math.h>
float Media(int opcao ){
    switch(opcao){
        float a,b,c;
        case 1:
            printf("MEDIA Geometrica %.2f",pow((a*b*c),1/3));
            break;
        case 2:
            printf("MEDIA Ponderada %.2f",(a*2+(2*b)+(3*c))/7); //Devemos colocar o peso de acordo com que será aplicado. 
            break;
        case 3: 
            printf("MEDIA Harmonica %.2f",(1/(1/a)+(1/b)+(1/c)));
            break;
        case 4:
            printf("MEDIA Aritimetica %.2f",(a+b+c)/3);
            break;
    }
}
int main(){
    int Num1,Num2,Num3,caso;
    printf("Escolha uma das opcoes abaixo :");
    printf("\n\n        MEDIA\n1-Geometrica\n2-Ponderada\n3-Harmonica\n4-Aritimetica\n");
    scanf("%d",&caso);
    printf("Digite tres numeros inteiros\n");
    scanf("%d%d%d",&Num1,&Num2,&Num3);
    Media(caso);  
    }

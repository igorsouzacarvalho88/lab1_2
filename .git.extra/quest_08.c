//Faça um Programa que peça as 4 notas bimestrais e mostre a média.
#include <stdio.h>
int main(){
int nota_01 , nota_02 , nota_03 , nota_04;
int soma,media ;

printf("digite a primeira nota\n");

scanf("%d",&nota_01);

printf("digite a segunda nota\n");

scanf("%d",&nota_02 );

printf("digite a terceira nota\n");

scanf("%d",& nota_03);

printf("digite a quarta nota\n");

scanf("%d",&nota_04);

soma=(nota_01+ nota_02+ nota_03+nota_04);
media=soma/4;
printf("A media é: %d\n",media);
scanf("%d",&nota_04);
return (0);
}

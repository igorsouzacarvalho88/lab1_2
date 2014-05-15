#include<stdio.h>
float ganhador1(float valor){
	return(valor *0.46);
 }
float ganhador2(float valor){
	return(valor*0.32);
}
float ganhador3(float valor){
	return(valor*0.22);
}
 int main(void){
	char ident1,ident2,ident3; 
	float premio;
	printf("Digite o valor do premio\n");
	scanf("%f",&premio);
	printf("Digite o nome dos ganhadores");
	printf("\nGANHADOR 1->");
	scanf("%s",&ident1);
	printf("\nGANHADOR 2->");
	scanf("%s",&ident2);
	printf("\nGANHADOR 3->");
	scanf("%s",&ident3);
	
	printf("\nO primeiro ganhador %c recebera a quantia = R$ %.2f",ident1,ganhador1(premio));
	printf("\nO segundo ganhador %c recebera a quantia = R$ %.2f",ident2,ganhador2(premio));
	printf("\nO terceiro ganhador %c recebera a quantia = R$ %.2f",ident3,ganhador3(premio));
	return(0);
 }
 

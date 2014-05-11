/*Receber o salario de um funcionário, calcular e mostrar seu novo salário, sabendo que
ele recebeu um aumento de 25%.*/
#include<stdio.h>
float salario(float dindin){
float aument;
aument=(dindin)+dindin*25/100;
printf("O aumento do salario foi para %.2f:\n",aument);
return(0);

}

int main(){
	float cash;
	printf("Digite o valor do seu último sálario:\n\n");
	scanf("%f", &cash);
	return(salario(cash));
	
	
}

//salario(cash)aumente=a+dindin;

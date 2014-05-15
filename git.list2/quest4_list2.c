/*4. Receber o salario de um funcionário, calcular e mostrar seu novo salário, sabendo que 
ele recebeu um aumento de 25%.*/
#include <stdio.h>
float func(float ganho){
	float mod_salario;
	mod_salario=ganho*0.25;
	return(mod_salario+ganho);
}
int main(){
	float salario;
	printf("Digite seu salario ");
	scanf("\n%f",&salario);
	printf("NOVO SALARIO = %f \n",func(salario));
	return(0);
}

/*9� Receber o sal�rio de um trabalhador e o valor da presta��o de um empr�stimo, se a
presta��o for maior que 20% do sal�rio imprima: �Empr�stimo n�o concedido�, caso
contrario imprima: �Empr�stimo Concedido�*/
# include <stdio.h>
float emp(float salario, float prest){
	if ((prest)>(salario*0.20)){
		printf("Emprestimo Nao Concedido");
	}
	else 
		printf("Emprestimo Concedido");
}
int main(){
	float valor,prestacao;
	printf("Digite o valor do seu salario :");
	scanf("%f",&valor);
	printf("Digite o valor da prestacao do Emprestimo : ");
	scanf("%f",&prestacao);
	emp(valor,prestacao);
}


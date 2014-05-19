/*9ª Receber o salário de um trabalhador e o valor da prestação de um empréstimo, se a
prestação for maior que 20% do salário imprima: “Empréstimo não concedido”, caso
contrario imprima: “Empréstimo Concedido”*/
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


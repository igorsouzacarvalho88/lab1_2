#include <stdio.h>

int main () {
  float valorHora = 30.5;
  int horas = 0;
  float salario = 0;
  printf("  Horas trabalhadas nesse mes?\n 1 hora = %.2f reais\n", valorHora);
  scanf("%d", &horas);
  salario = horas*valorHora;
  printf("Seu salario nesse mes e %.2f", salario);
	scanf("%d", &horas);
   return(0);
}

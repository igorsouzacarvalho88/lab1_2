#include <stdio.h>

int main () {
  float altura, imc = 0;
  printf("Entre com sua altura para calcular o peso ideal (em m)\n");
  scanf("%f", &altura);
  imc = (72.7*altura) - 58;
  printf("\nSeu peso ideal e de %.1fkg", imc);
}

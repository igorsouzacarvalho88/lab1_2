#include <stdio.h>

int main () {
  float fa = 0;
  float ce = 0;
  printf("Qual a temperatura em Fahrenreit?\n");
  scanf("%f", &fa);
  ce = (5 * (fa-32) / 9);
  printf("%.1fF = %.1fC", fa, ce);
}

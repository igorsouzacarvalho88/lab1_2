#include <stdio.h>

int main () {
  float fa = 0;
  float ce = 0;
  printf("Qual a temperatura em Celsius?\n");
  scanf("%f", &ce);
  fa = (ce*1.8)+32;
  printf("%.1fC = %.1fF", ce, fa);
}

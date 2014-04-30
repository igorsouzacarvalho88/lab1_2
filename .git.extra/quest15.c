#include <stdio.h>

int main () {
  int i1, i2 = 0;
  float real, calc1, calc2, calc3 = 0;
  printf("Entre com um numero inteiro\n");
  scanf("%d", &i1);
  printf("\nEntre com outro numero inteiro\n");
  scanf("%d", &i2);
  printf("\nEntre com um numero real\n");
  scanf("%f", &real);
  calc1 = (i1*2)*(i2/2); //o produto do dobro do primeiro com metade do segundo
  calc2 = (i1*3)+real; // a soma do triplo do primeiro com o terceiro
  calc3 = (real*real*real);
  printf("\nO produto do dobro do primeiro com metade do segundo:\n%.1f", calc1);
  printf("\nA soma do triplo do primeiro com o terceiro:\n%.1f", calc2);
  printf("\nO terceiro elevado ao cubo:\n%.1f", calc3);
}

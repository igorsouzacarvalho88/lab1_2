#include <stdio.h>

int main () {
  float altura, imc, peso = 0;
  char sexo;
  printf("\nQual o seu sexo? m para masculino, f para feminino\n");
  scanf("%c", &sexo);
  printf("Entre com sua altura para calcular o peso ideal (em m)\n");
  scanf("%f", &altura);
  printf("\nQuanto voce pesa hoje?\n");
  scanf("%f", &peso);

  if (sexo == 'm' || sexo == 'M') {
    imc = (72.7*altura) - 58;
    printf("\nSeu peso ideal e de %.1fkg e ", imc);
  } else if (sexo == 'f' || sexo == 'F') {
    imc = (62.1*altura) - 44.7;
    printf("\nSeu peso ideal e de %.1fkg e", imc);
  }
   else printf("\nSexo invalido. Nao podemos calcular seu peso ideal");
  
  if (sexo == 'm' || sexo == 'M' || sexo == 'f' || sexo == 'F') {
    if (peso > imc) {
      printf("voce esta acima do peso ideal");
    } else if (peso == imc) {
      printf("voce esta no peso ideal");
    } else if (peso < imc) {
      printf("voce esta abaixo do peso ideal");
    }
  }
  
 
   
   
   
} 

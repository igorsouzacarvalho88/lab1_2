#include <stdio.h>
float qt_liquida(float valor){
	return((30*valor)-(30*valor*0.08));
}
int main()
{
	float D;
	printf("DIGITE A QUANTIDADE DE DIAS TRABALHADOS\n");
	scanf("%f",&D);
	printf("VALOR A SER PAGO %.2f",qt_liquida(D));
	return 0;
}


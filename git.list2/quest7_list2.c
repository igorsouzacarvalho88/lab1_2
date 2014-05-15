#include <stdio.h>
float hipot(float cateto01,float cateto02){
	return((cateto01*cateto01)+(cateto02*cateto02));
}
int main()
{
	float x,y;
	printf("DIGITE O VALOR DO PRIMEIRO CATETO\n");
	scanf("%f",&x);
	printf("DIGITE O VALOR DO SEGUNDO CATETO\n");
	scanf("%f",&y);
	printf("HIPOTENUSA = %.2f",hipot(x,y));
	return 0;
}


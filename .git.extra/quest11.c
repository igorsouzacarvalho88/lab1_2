//Faça um Programa que leia o tamanho de um lado do quadrado e calcule sua área, em seguida mostre o dobro desta área para o usuário;

#include<stdio.h>
int main(){
	int lado;
	printf ("Digite o tamanho do lado\n");
	scanf ("%d",&lado);
	printf("A area é %d u.a", lado*lado);
	printf("O dobro da área é %d u.a ",2*lado);
	scanf("%d",&lado);
	return(0);
}


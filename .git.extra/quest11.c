//Fa�a um Programa que leia o tamanho de um lado do quadrado e calcule sua �rea, em seguida mostre o dobro desta �rea para o usu�rio;

#include<stdio.h>
int main(){
	int lado;
	printf ("Digite o tamanho do lado\n");
	scanf ("%d",&lado);
	printf("A area � %d u.a", lado*lado);
	printf("O dobro da �rea � %d u.a ",2*lado);
	scanf("%d",&lado);
	return(0);
}


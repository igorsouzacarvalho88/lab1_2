#include<stdio.h>

main(){
	int i;
	char ch;
	float f;
	f=ch=i=72;
	printf ("%.1f\n", f);
	printf ("%d\n", ch);
	printf ("%d\n", i);
}
/* Ela imprime todos os valores iguais pois mesmo quando você imprime
 char e float também.
*/

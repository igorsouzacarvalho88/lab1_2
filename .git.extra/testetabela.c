#include<stdio.h>
/*
ele l� primeiro o valor da variavel X para depois incrementar, na terceira linha do c�digo.
Com isso � necessario colocar ++ antes da variavel para ele incrementar antes.
*/
ma in(){

int x,y,z;
x=y=10;
printf("\n%d %d %d\n", x,y,z);
z=(x++);
printf("\n%d %d %d\n", x,y,z);
x=-x;
printf("\n%d %d %d\n", x,y,z);
y++;
printf("\n%d %d %d\n", x,y,z);
x=x+y-(z--);

printf("\n%d %d %d\n", x,y,z);
}

# include <stdio.h>
int fib(int x){

    int u1 = 0, u2 = 1, aux, limite;
    printf("\n%d ",u1);
    printf("%d ",u2);

    while (u2 <= limite){
        aux = u2;
        u2 = u1 + u2;
        u1 = aux;
        printf("%d ",u2);
    }
    printf("\n");
}
void main(){

   
int numero_limit;
    printf("Entre com um numero inteiro limite: \n");
    scanf("%d", &numero_limit);
	fib(numero_limit);
}

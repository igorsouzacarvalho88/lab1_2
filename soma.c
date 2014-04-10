#include<stdio.h>
#include<stdlib.h>

int main()
{ 
    //Variaveis
    
    int meninos, meninas,soma;
    
    //Entrada de dados
    
    printf("Digite o numero de meninos na sala de aula:\n");
    scanf("%d", &meninos);
    printf("Digite o numero de meninas na sala de aula:\n");
    scanf("%d",&meninas);
    
    //Processamento
    
    soma = meninos+meninas;
    printf("O total de alunos na sala e: %d" ,soma);
    
    //Final de codigo
    
    fflush(stdin);
    getch();
    return 0;
}
           

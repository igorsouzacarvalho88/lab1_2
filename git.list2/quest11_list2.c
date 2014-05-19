/* 11° Leia a idade e o tempo de serviço de um trabalhador
 e escreva se ele pode ou não se aposentar. As condições
para aposentadoria são:
*Ter pelo menos 65 anos;
*Ter trabalhado pelo menos 30 anos;
*Ter pelo menos 60 anos ;
*Trabalhado pelo menos 25;
anos.*/
#include<stdlib.h>
#include<stdio.h>
int aposentaria(int idade, int trabalho){
    printf("\n^!^\n");
	if ((idade>=65) || (trabalho>=30) || ((idade>=60)&&(trabalho>=25))){
        
		printf("\nCondicao para a sua aposentadoria teve o parecer favoravel! ");
    }
    
	else
        printf("Condicao para a sua aposentadoria teve o parecer não favoravel! ");
}
int main(){
    int Anos,temp_servico;
    printf("Digite sua idade : \n\n->");
    scanf("%d",&Anos);
    printf("Digite seu tempo de Servico :\n\n->");
    scanf("%d",&temp_servico);
    aposentaria(Anos,temp_servico);
}

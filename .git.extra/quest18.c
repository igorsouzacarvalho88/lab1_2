/*Jo�o Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento di�rio de seu trabalho. 
Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de S�o Paulo
(50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. Jo�o precisa que voc� fa�a um programa que leia a vari�vel 
peso (peso de peixes) e verifique se h� excesso. Se houver, gravar na vari�vel excesso e na vari�vel multa o valor da multa que Jo�o 
dever� pagar.
Caso contr�rio mostrar tais vari�veis com o conte�do ZERO.*/


/*R$ 4,00 por quilo excedente.
peso  de peixe (50 quilos)
vari�vel excesso
vari�vel multa */
#include<stdio.h>

int main (){
int multa,peso;
float excesso;

printf("Digite o valor peso");
scanf("%d",&peso);
	if(peso>50){
		excesso=peso-50;
		multa=excesso*4;
	}
		else(peso=<50) {
		printf("N�o teve excesso assim n�o teve multa");
		}
return (0);
}



/*5. A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso. 
Sendo que da quantia total: O primeiro ganhador recebera 46%; O segundo recebera 
32%; O terceiro recebera o restante; Calcule e imprima a quantia ganha por cada um 
dos ganhadores.*/
#include<stdio.h>


float premio(int ganhador){
	float d, prim, seg, terc, total;
	int pont;
	pont=1;
	d=780,000.00;
	
	if (ganhador==pont){
	
	prim=(d*100/46);
	printf("O primeiro premio fica com:\n\n %.2f",prim);
	
	seg=(d*100/32);
	printf("\n\n O segundo lugar levou:\n\n %.2f",seg);
	
	terc=((seg+prim));
	printf("\n\n O terceiro ficou com essa quantia:\n\n %.2f",terc);
	
	//total=(prim+seg+terc);
	
	//printf("\n\n O total do premio foi:\n\n %.2f",total);
	return(0);
	}
}
int main(){
	int posicao_do_ganhador;
	
	printf("Digite um numero 1 para aparecer o valores:\n\n");
	
	scanf("%d\n", &posicao_do_ganhador);
	
	if(posicao_do_ganhador==1){
		return (premio(1));
	}	
	
	else
		(posicao_do_ganhador==0);
	printf("Nao foi possivel identificar o dado usado!\n\n");
	return(0);

	
}

# include <stdio.h>

int menu(){
    int i;
  printf("Digite qual categoria do consumidor\n");
  printf("1.Residencial\n");
  printf("2.Comercial\n");
  printf("3.Industrial\n");
  scanf("%d",&i);
  return i;
}


int main(){
   float valor_kw,cons_mes,maior = 0,menor=10000000000,media,cons_red=0,cons_comer=0,cons_ind=0,num_hora;
   int cod,verific,categ;

 printf("Digite o valor do kwh.\n");
 scanf("%f",&valor_kw);
 while(verific!=-1){
   printf("Digite o codigo do consumidor\n");
   scanf("%d",&cod);
   num_hora++;
  categ = menu();

  printf("Digite o consumo do mes\n");
  scanf("%f",&cons_mes);
   media = media + cons_mes;
   if(cons_mes>maior){
       maior=cons_mes;
    }

 if(cons_mes<menor){
       menor=cons_mes;
    }

   if(categ == 1){
     cons_red = cons_red + cons_mes;
   }else{
    if(categ == 2){
     cons_comer = cons_comer + cons_mes;
   }else{
    if(categ == 3){
     cons_ind = cons_ind + cons_mes;
   }
 }
}
  printf("Digite -1 para sair o qualquer numero para continuar\n");
  scanf("%d",&verific);
 }
  printf("O maior consumo eh %.2f\n", maior);
  printf("O menor consumo eh %.2f\n", menor);
  printf("A media de consumo dos habitantes eh %.2f\n",(media/num_hora));
  printf("O consumo na categoria 1 eh %.2f\n",cons_red);
  printf("O consumo na categoria 2 eh %.2f\n",cons_comer);
  printf("O consumo na categoria 3 eh %.2f\n",cons_mes);

  return 0;
}

//14??//
#include <stdio.h>
int tempo(int hs,int he,int ms,int me){
    int horas,minutos;
    horas=hs-he;
    minutos=ms-me;
    if (horas=0)
    {
        horas=horas++;
    }   
    return(horas);
}
int tarifas(int tp){    
    switch (tp){
        case 1:
            printf("\nvalor cobrado = R$ 1,00");    
        case 2:
            printf("\nvalor cobrado = R$ 2,00");
        case 3 :
            printf("\nvalor cobrado = R$ 4,20");
        case 4:
            printf("\nvalor cobrado = R$ 5,60");
        case 5:
            printf("\nvalor cobrado = R$ %d",tp*2); 
    }   
}
int main(){
    int hora_entrada,minutos_entrada,hora_saida,minutos_saida,tempo_permanencia;
    printf("ESTACIONAMENTO");
    printf("\nDigite o horario de entrada do carro");
    printf("\nHora-> ");
    scanf("%d",&hora_entrada);
    printf("MINUTOS->");
    scanf("%d",&minutos_entrada);   
    printf("Digite o horario de saida do carro");
    printf("\nHora->");
    scanf("%d",&hora_saida);
    printf("MINUTOS->");
    scanf("%d",&minutos_saida);
    tempo_permanencia=tempo(hora_saida,hora_entrada,minutos_saida,minutos_entrada);
    printf("o tempo de permanencia do carro foi = %d",tempo_permanencia);
    tarifas(tempo_permanencia);
}

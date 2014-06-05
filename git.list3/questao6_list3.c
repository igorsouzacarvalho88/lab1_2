# include <stdio.h>


int Soma_Pares(int num){
    int count=0, count2=0, soma=0;
    while(count<num){
        
        if (count2%2 == 0){
            soma += count2;
            count++;
        }
        count2++; //acrecentando apartir de zero.
    }
    return soma;
}

void main(){
    printf("%d\n",Soma_Pares(50));
}

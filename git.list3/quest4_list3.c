# include <stdio.h>

int mult_3(){
    int cont = 0, testador = 0;
    while (cont < 5){
        ++testador;
        if (testador % 3 == 0){
            printf("%d \n",testador);
            ++cont;
        }
    }
}

void main(){
    mult_3();
}

# include <stdio.h>
# include <stdbool.h>
# include <string.h>

void mostrar(){
    int elemInt;
    for(elemInt=1;elemInt<=100;elemInt++){
        printf("%d\n",elemInt);
    }
    elemInt = 1;
    while(elemInt<=100){
        printf("%d\n",elemInt);
        elemInt++;
    }
    elemInt = 1;
    do{
        printf("%d\n",elemInt);
        elemInt++;
    }while(elemInt<=100);
}

void main(){
    mostrar();
}

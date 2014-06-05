# include <stdio.h>
# include <stdbool.h>
# include <string.h>

bool primo(int x){
    int e;
    for (e=1;e<x;e++){
        if ((e!=1) && (x%e==0)){
            return false;
        }
    }
    return true;
}

void main(){
    if (primo(23)){
        printf("E primo!");
    } else {
        printf("Nao e primo!");
    }
}

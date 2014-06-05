# include <stdio.h>
# include <stdbool.h>

# define MAX 10

char* Mod(char *p,int tamanho_string){
    int element;
    for (element=0;element<tamanho_string;element++){
        if (p[element] == '0'){
            p[element] = '1';
        }
    }
    return p;
}


void main(){
    char mod[MAX] = "100110010";
    printf("%s\n",Mod(mod,MAX));
}

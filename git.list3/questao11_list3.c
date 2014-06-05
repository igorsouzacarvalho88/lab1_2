# include <stdio.h>
# include <stdbool.h>

# define total 10

int F_cont(char *palavra,int tam_strg){
    int elemnt_Int, count = 0;
    for (elemnt_Int=0;elemnt_Int<tam_strg;elemnt_Int++){
        if (palavra[elemnt_Int] == '1'){ 
            count++;
        }
    }
    return count;
}


void main(){
    char word[total] = "100110010"; 
    printf("%d\n",F_cont(word,total));
}

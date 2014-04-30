#include <stdio.h> 
 main() 
{ 
    char x[25], y[25]; 
    printf(" Digite a primeira string: "); 
    
	scanf("%s",x);         /* Le string 1*/ 
    
	
	printf("\n Digite a segunda string: "); 
    
    
	scanf("%s",y);         /* Lê string 2*/ 
    
    
	printf("\n\n As strings lidas sao:\n %s \n %s", x, y); /* Imprime as strings*/ 
    
	printf("\n\n A segunda letra da primeira string e': %s", &x[1]); 
    
	printf("\n A segunda letra da segunda string e': %s ", &y[2]); 
         return 0;
} 


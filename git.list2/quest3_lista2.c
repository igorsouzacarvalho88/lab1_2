   /* Efetuar uma Leitura de trés Valores e apresentar Como Resultado final, um dos soma
quadrados dos Três Valores lidos */
   
   #include <stdio.h>
        
	void mult (int num1, int num2,int num3)	/* Multiplica 3 numeros */
        {
        	printf ("O valor encontrado foi: %d",(num1*num1)+(num2*num2)+(num3*num3));
        }

        void main ()
        {
        	int x,y,z;
        	printf("Passe o valor dos numeros para o calculo:\n\n");
        	scanf("%d",&x);
        	scanf("%d",&y);
        	scanf("%d",&z);
			
        	mult (x,y,z);
        }

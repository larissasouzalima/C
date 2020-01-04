#include <stdio.h>


  int main ()
  
  {
  	
  	int num1, num2, num3, num4;
  	
  	 printf("Entre com numero 1: ");
   	 scanf("%d", &num1);
   	 
   	 printf("\nEntre com numero 2: ");
   	 scanf("%d", &num2);
   	 
   	 printf("\nEntre com numero 3: ");
   	 scanf("%d", &num3);
   	 
     printf("\nEntre com numero 4: ");
   	 scanf("%d", &num4);
   	 
   	
  	if (((num1>num2)&&(num3>num4))&&((num3 + num4) < (num1 + num2)))
  	{
  		printf("\n Os numeros atendem os criterios!" );
  		
  		  		
	   } else{
	   	printf("\nNao atendem aos criterios");
	   	
	   	
	   }
		  
		  return 0;
		  
	}


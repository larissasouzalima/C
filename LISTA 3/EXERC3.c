#include <stdio.h>


  int main ()
  
  {
  	
  	int num1, num2, num3;
  	
  	 printf("Entre com numero 1: ");
   	 scanf("%d", &num1);
   	 
   	 printf("\nEntre com numero 2: ");
   	 scanf("%d", &num2);
   	 
   	 printf("\nEntre com numero 3: ");
   	 scanf("%d", &num3);
   	 
   	
  	if ((num1>num2)&&(num2>num3))
  	{
  		printf("\nA ordem crescente eh: %d %d %d", num3, num2, num1 );	
  			
	  }
    if((num1>num3)&&(num3>num2))
	  	{
		  
	  	 printf("\nA ordem crescente eh: %d %d %d ", num2, num3, num1);
	
       } 
     	if((num2>num1)&&(num1>num3))
     	{
	
     	
        printf("\nA ordem crescente eh: %d %d %d ", num3, num1, num2);
     	
     	 } 
     	 	
     	if((num2>num3)&&(num3>num1))
     	
     	{
     	
        printf("\nA ordem crescente eh: %d %d %d ", num1, num3, num2);
        
        } 
     	 	
     	if((num3>num1)&&(num1>num2))
     	
     	{
		 
        printf("\nA ordem crescente eh: %d %d %d ", num2, num1, num3);
        
        } 
     	 	
     	if((num3>num2)&&(num2>num1))
     	{
	
        printf("\nA ordem crescente eh: %d %d %d ", num1, num2, num3);
    }
    
     return 0;
	 }
	  	
	  	
	  
	  
	 

 

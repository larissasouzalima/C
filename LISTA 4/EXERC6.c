#include <stdio.h>

  int main()
  
  {
  	
  	float num1, num2;
  	char op;
  	
  	printf("Entre com um numero: ");
	scanf("%f", &num1); 
	
	printf ("Entre com o segundo numero: ");
	scanf("%f", &num2);   	
    
    printf("Digite a operacao: ");
    scanf(" %c", &op);
    
    if(op == 42)
    {
  	printf("\n O resultado eh: %.2f", num1 * num2);
  	}else{
  	if( op == 43)	
  	{
  	printf("\n O resultado eh: %.2f", num1 + num2);	
	 } else{
	 if( op == 45)	
	 {
	 printf("\n O resultado eh: %.2f", num1 - num2);
    } else{
    if(op == 47)	
    {
    printf("\n O resultado eh: %.2f", num1 / num2);	
    	
	} else
	{
		 printf("Erro!");
		
		
	}	
	}	 		
	}	 	
	}	
	 return 0;  		
	}
	
 	
   


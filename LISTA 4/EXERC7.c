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
    
    switch(op)
    {
    case '*':
  	printf("\n O resultado eh: %.2f", num1 * num2);
  	break;
  	
  	case '+':	
  	printf("\n O resultado eh: %.2f", num1 + num2);	
	break;
	
	case '-':	
	printf("\n O resultado eh: %.2f", num1 - num2);
	break;
   
    case '/':	
    printf("\n O resultado eh: %.2f", num1 / num2);	
    break;
    
    default:
    	printf("Por favor entre com uma operacao valida");
		
	}		 		
		 	
	
	 return 0;  		
	}

#include <stdio.h>

  int main()
  
  {
  	
  	char n;
  	
  	printf("Entre com um caracter: ");
	scanf("%c", &n);    	
    
    if((n >= 97) && (n <= 122))
    {
  	printf("\n O caracter eh: %c", n - 32);
  	
    } else{
    
	if((n >= 65) && (n <= 90))
	{
	printf("\n O caracter eh: %c", n+ 32);	
				
	} else{
		
	printf("Erro!");	
		
		
	}
	
	
}	
 	
    return 0;
  	
}

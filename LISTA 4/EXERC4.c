#include <stdio.h>

  int main()
  
  {
  	
  	char n;
  	
  	printf("Entre com um caracter: ");
	scanf("%c", &n);    	
    
    if((n >= 65) && (n <= 90))
    {
  	printf("\n O caracter eh: %c", n);
  	
    } else{
	
	printf("Erro!");
	
}	
  		
    return 0;
  	
}

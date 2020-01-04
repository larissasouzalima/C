#include <stdio.h>

  int main()
  
  
  {
  	 int ano, resul;
  	 
  	    	 
   	 printf("Entre com o ano: ");
   	 scanf("%d", &ano);
   	 
   	 resul = ano % 400;
   	 resul = ano %4;
   	 
   	if (resul == 0)
   	{
   		printf("\nO ano eh bissexto");
   		
	   } else {
	   
   		printf ("O ano nao eh bissexto");
   		
   		return 0;
  	
  }
}

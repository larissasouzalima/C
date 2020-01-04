#include <stdio.h>


   int main()
   {
   	
   	
   	int n, i;
   	
   	
   	printf("Entre com um numero positivo: ");   	
    
    do{
    	
    scanf("%d", &n);

    if(n < i){
	
    printf("O valor deve ser positivo");
    printf("\nEntre com outro valor: ");
    scanf("%d", &n);
    
    while(n < i){
    printf("O valor deve ser positivo");
    printf("\nEntre com outro valor: ");
    scanf("%d", &n);	
    	
	}
	}
    break;
   }while(n > i);

       
        for( i = n; i >= 0 ; i--){

    	printf("Valor positivo eh: %d\n ", i);   	
    	
	}
  
 	
    return 0;	
   	
   }

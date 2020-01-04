#include <stdio.h>

#define TAM 10  

  int main()  
  {
  	
  	float nums[TAM];
  	int i;
  	
  		
		
		for(i = 0; i < TAM; i++){
			
			printf("Entre com o valor positivo: ");
			scanf("%f", &nums[i]);
				
		}
		
			for(i = 0; i < TAM; i++){
		
			printf("%.2f\n ", nums[i]);
				
		}
				
		for (i = TAM - 1; i >= 0 ; i--){
			  printf("%.2f\n ", nums[i]);
		}		
  	  
  	
  	return 0;
  }

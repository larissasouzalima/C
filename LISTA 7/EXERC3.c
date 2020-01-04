#include <stdio.h>

#define TAM 16

  int main()
  {
  	
  	int i;
  	float nums[TAM] aux[8];
  	
  	
  	for(i = 0; i < TAM ; i++){
			
		printf("Entre com o valor positivo: ");
		scanf("%f", &nums[i]);

		
				
		}
		
		for(i = 0; i < TAM/2; i++){
			
		aux[i] = nums[i]	
			
		}
		
		for(i = 0; i < TAM/2; i++){
			
		nums[i] = nums[i + 8];	
			
		}
		
		printf("%.2f\n ", nums[i], num[i]);
	
		return 0;
		
	}
				

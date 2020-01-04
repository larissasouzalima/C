#include <stdio.h>

#define TAM 7

  int main()
  {
  	
  	int i;
  	float nums[TAM], media = 0, maior, menor;
  	
 	
  			for(i = 0; i < TAM; i++){
  				
  			printf("Entre com o valor positivo: ");
			scanf("%f", &nums[i]);
			
			if(i == 0){
				
				menor = nums[0];
				maior = nums[0];
				
			}
			
			media = media + nums[i];
			
			if(nums[i] < menor){
  			menor = nums[i];
  			
		   } 
  		   if(nums[i] > maior){
  		   maior = nums[i];
  			
		  } 
 	
	  }
	    media = media /TAM;
	  
	  printf("Media = %.2f\n Menor = %.2f\nMaior  = %.2f\n",media, menor, maior);
	  
		return 0;	
		
		}
		
	  
  	
  

#include <stdio.h>

  int main()
  
  {
  	 float peso, res1, res2;
  	 const float cobre = 0.7;
  	 const float zinco = 0.3;
  	 
    printf("Peso do latao: ");
  	scanf("%f",&peso);

  	
  	res1 = peso * cobre;
  	res2 = peso * zinco;

  	
  	
  	printf("\n O valor do cobre do latao e = %.2f\n", res1);
  	printf("\n O valor do zinco do latao e = %.2f\n", res2);

  	return 0;
  	
  	
  }

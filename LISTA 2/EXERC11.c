#include <stdio.h>


  int main()
  
  {
  	
  	int num1, num2, num3;
  	float d;
  	printf("\nDigite o primeiro numero: ");
  	scanf("%d", &num1);
  	
  	printf("\nDigite o segundo numero: ");
  	scanf("%d", &num2);
  	
  	printf("\nDigite o terceiro numero: ");
  	scanf("%d", &num3);
  	
  	d = ((num1 * num1 + num2 * num2) + (num2 * num2 + num3 * num3))/ 2;
  	
  	printf("\n O resultado da expressao e: %.2f", d);
  	
  	return 0;
  	 	
  }

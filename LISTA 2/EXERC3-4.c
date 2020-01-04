#include <stdio.h>

  int main()
  
  {
  	 float num1, num2, metro,cent;
  	 
    printf("Digite o metro: ");
  	scanf("%f",&num1);
  	
  	printf("Digite o centimetro: ");
  	scanf("%f",&num2);
  	
  	
  	metro =  num1 * 100;
  	cent = num2 / 100;
  	
  	
  	printf("Em centimetros = %.2f\n", metro);
  	printf("Em metros = %.2f\n", cent);
  	
  	return 0;
  	
  }

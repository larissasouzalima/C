#include <stdio.h>

 int main()
 
 {
 	float dias, sal, res, desc;
	 
	const float imp = 0.08;
	
	sal = 50;
  	 
    printf("Dias trabalhados: ");
  	scanf("%f",&dias);

  	
  	desc = dias * sal * imp;
  	res = dias * sal - desc;

  	printf("\n O valor a ser descontado = %.2f\n", desc);
  	printf("\n O salario final e = %.2f\n", res);

  	return 0; 
 	
 	
 }

#include <stdio.h>

   int main()

   {
   	
   	int num1, num2, soma, sub, mult;
   	float div;
   	
   	printf("Digite o primeiro numero:");
   	scanf("%d",&num1);
   	
   	printf("\nDigite o segundo numero:");
   	scanf("%d",&num2);
   	
   	soma = num1 + num2;
   	sub = num1 - num2;
   	mult = num1 * num2;
   	div = num1 / num2;
   	
   	
   	printf("\nO resultado do calculo e:\n %d\n %d\n %d\n %.1f",soma,sub,mult,div);
   	
   	
   	return 0;
   	
   	
   	
   }

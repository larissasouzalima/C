#include <stdio.h>

   int main ()
   
   {
   	
   	int id, vendas;
   	float salfixo, porcentagem, result;
   	
   	printf("Informe o numero do vendedor: ");
   	scanf("%d", &id);
   	
   	printf("\nInforme o salario fixo: ");
   	scanf("%f", &salfixo);
   	
   	printf("\nInforme o total de vendas: ");
   	scanf("%d", &vendas);
   	
   	printf("\nInforme o porcentual de vendas: ");
   	scanf("%f", &porcentagem);
   	
   	result = (salfixo * porcentagem) + salfixo;
   	
    printf("\nA identificacao do vendedor e: %d",id);
   	printf("\nO salario final do vendedor e: %.2f", result);
   	
   	return 0;
   	
   }

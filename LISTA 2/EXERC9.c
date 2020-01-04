#include <stdio.h>

 int main()
 
 {
 	float area, valor, piso;
 	
    printf("Digite a area: ");
  	scanf("%f",&area);
 	
 	piso = area / 0.09;
 	valor = area * 7;
 	
    printf("\n A quantidade de pisos e   = %.2f\n", piso);
  	printf("\n O valor final e = %.2f\n", valor);

  	return 0; 
 		
 	
 }

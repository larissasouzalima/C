#include <stdio.h>

  int main()
  
  {
  	// Declaração de variavel
  	float altura, raio, cilindro;
  	const float pi = 3.141592;
  	
  	printf("Altura: ");
  	scanf("%f",&altura);
  	
  	printf ("\nRaio: ");
  	scanf("%f",&raio);
  	
  	cilindro = pi * raio * raio * altura;
  	
  	printf("O volume de um cilindro = %f\n", cilindro);
  	
  	return 0;
  	
  }

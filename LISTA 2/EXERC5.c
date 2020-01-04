#include <stdio.h>

  int main()
  
  {
  	 float nota1, nota2, nota3, nota4, nota5, media ;
  	 
    printf("Digite a nota 1: ");
  	scanf("%f",&nota1);
  	
  	printf("\nDigite a nota 2: ");
  	scanf("%f",&nota2);
  	
  	printf("\nDigite a nota 3: ");
  	scanf("%f",&nota3);
  	
  	printf("\nDigite a nota 4: ");
  	scanf("%f",&nota4);
  	
  	printf("\nDigite a nota 5: ");
  	scanf("%f",&nota5);
  	
  	
  	media =  (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

  	
  	
  	printf("A media e = %.2f\n", media);

  	return 0;
  	
  	
  }

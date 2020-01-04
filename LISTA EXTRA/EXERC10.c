#include <stdio.h>


  int main(){

  float pop_A, pop_B, taxa_A, taxa_B;
  int anos = 0;

  do{
  printf("\nDigite a populacao de um pais: ");
  scanf("%f", &pop_A);

  printf("\nDigite a taxa da populacao: ");
  scanf("%f", &taxa_A);

  printf("\nDigite a populacao de outro pais: ");
  scanf("%f", &pop_B);

  printf("\nDigite a taxa da populacao: ");
  scanf("%f", &taxa_B);

  if(taxa_A < taxa_B) printf("Operacao impossivel!");


  while (pop_A <= pop_B){

    pop_A = pop_A * taxa_A;
    pop_B = pop_B * taxa_B;
    anos++;
  }
   printf("\nNumero de anos para que a pop do pais A\n ultrapasse ou iguale a pop do pais B: %d\n", anos);
}while(pop_A > 0 && pop_B > 0);
  return 0;






  }




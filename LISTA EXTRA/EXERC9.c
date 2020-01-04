#include <stdio.h>

  int main(){

  float pop_A = 80.000, pop_B = 200.000;
  int anos = 0;

  while (pop_A <= pop_B){

    pop_A = pop_A * 1.03;
    pop_B = pop_B * 1.015;
    anos++;
  }
   printf("Numero de anos para que a pop do pais A\n ultrapasse ou iguale a pop do pais B: %d", anos);

  return 0;
  }

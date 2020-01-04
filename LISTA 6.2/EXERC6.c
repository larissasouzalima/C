#include <stdio.h>

  int main()

  {
      int valor;

      printf("Digite um numero par: ");
      scanf("%d", &valor);

      while(valor % 2 == 0){

      printf("O numero %d " , valor); printf ("eh par.\n");
      printf("Digite um numero par: ");
      scanf("%d", &valor);

      }

      printf("O numero %d ", valor); printf ("eh impar.\n");
      printf("Finalizando");

      return 0;


  }

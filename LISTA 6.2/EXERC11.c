#include <stdio.h>


  int main()

  {

    int valor, i;

    do{
    printf("Digite um valor: ");
    scanf("%d", &valor);

    for(i = 0; i < valor; i++){
    printf("%d\n",valor);

    }

    }while(valor <=500);

    printf("Finalizando");

      return 0;
  }

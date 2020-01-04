#include <stdio.h>

  int main()
  {

   int  i;
   char letra;

    do{
    printf("\nDigite uma letra minuscula: ");
    scanf(" %c", &letra);

    for(i = letra; letra <= 'z'; letra++)
    {
       printf("%c ", letra);

    }

    }while(letra >= 'a' || letra <= 'z');

    printf("Finalizando");

    return 0;

  }

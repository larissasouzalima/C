#include <stdio.h>

  int main()
  {

   int num, resultado, tabuada = 0;

   do{
   printf("Digite um numero entre 2 e 9: ");
   scanf("%d", &num);

   }while(num < 2 || num > 9);

    while(tabuada <=10 )
      {
            resultado = num * tabuada;
            printf("%d * %d = %d\n", num, tabuada, resultado);
            tabuada++;
      }

      return 0;

  }

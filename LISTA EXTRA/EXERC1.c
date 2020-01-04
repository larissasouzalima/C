#include <stdio.h>


   int main()

   {

       int sup, incre,i;

       printf("Digite um valor superior: ");
       scanf("%d", &sup);

       printf("Digite um numero incremento: ");
       scanf("%d", &incre);

        printf("A sequencia eh: ");
        for(i = 0; i <= sup; i = i + incre)
            {
       printf("%d ", i);
        }

       return 0;
   }

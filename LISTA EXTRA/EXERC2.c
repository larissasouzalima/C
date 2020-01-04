#include <stdio.h>


   int main()

   {

       int sup, num,i;

       printf("Digite um valor superior: ");
       scanf("%d", &sup);

       printf("Digite o numero 0 para PAR ou 1 para IMPAR: ");
       scanf("%d", &num);

       switch(num)
       {

        case 0:

        printf("A sequencia eh: ");
        for(i = 0; i <= sup; i = i + 2)
            {
        printf("%d ", i);
        }

        break;

        case 1:

        printf("A sequencia eh: ");

        for(i = -1; i <= sup ; i = i + 2)
            {
        printf("%d ", i);

            }
        break;

        default:
        printf("\nO segundo numero deve ser 0 ou 1 ");
	    }
       return 0;
   }


#include <stdio.h>

  int main()
  {

      int valor;

    do{
   	printf("\nEntre com o numero 0, 1, 2 ou 3: ");
	scanf("%d", &valor);

	switch(valor)

	    {
	    case 0:

        printf("\nLove\n");

	  	break;

	  	case 1:

        printf("\nYourself");

		break;

        case 2:

        printf("\nSpeak\n");

	  	break;

        case 3:

        printf("\nYouself Tour\n");

	  	break;

		default:
			printf("\nO segundo numero deve ser 0, 1, 2 ou 3! ");
	    }
    }while (valor >= 0);

   return 0;
  }

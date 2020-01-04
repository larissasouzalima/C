#include <stdio.h>


   int main()
   {


   	int num1, num2, i;

    do{
   	printf("\nEntre com o primeiro numero: ");
	scanf("%d", &num1);

	printf("\nEntre com o numero 0 ou 1: ");
	scanf("%d", &num2);

	switch(num2)

	    {
	    case 0:

			for( i = 0; i <= num1 ; i++){

	              printf("%d \n ", i);
		    }



	  	break;


	  	case 1:

		    for( i = num1; i >= 0 ; i--){

	              printf("%d \n ", i);
		    }


		break;
		default:
			printf("\nO segundo numero deve ser 0 ou 1 ");
	    }
    }while (num2 != 0 && num2!=1);
    return 0;

   }

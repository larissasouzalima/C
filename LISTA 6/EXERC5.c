#include <stdio.h>


   int main()

   {

   	int num1, num2, num3, i, cont = 0;


   	printf("Entre com o primeiro numero: ");
	scanf("%d", &num1);

	printf("Entre com o segundo numero: ");
	scanf("%d", &num2);

   	printf("Entre com o terceiro numero: ");
	scanf("%d", &num3);

	for (i = num2; i <= num3 ; i++ )
	{

		if(i % num1 == 0) cont++;


	}

	printf("cont = %d", cont);
   return 0;

}



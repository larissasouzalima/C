#include <stdio.h>


 int main()

 {

 	int valor;


 	do {

		printf("Entre com um numero: ");
 	    scanf("%d", &valor);
		if(valor % 2 == 0) printf("O numero eh par\n");

	 }while( valor % 2 == 0);

	 printf ("O numero eh impar ");

 	return 0;


 }

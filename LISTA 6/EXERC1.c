#include <stdio.h>


   int main()
   {


   	int n, i;


   	printf("Entre com um numero positivo: ");

    do{

    scanf("%d", &n);
    if(n < i){

    printf("O valor deve ser positivo");
    printf("\nEntre com outro valor: ");
    scanf("%d", &n);

    while(n < i){
    printf("O valor deve ser positivo");
    printf("\nEntre com outro valor: ");
    scanf("%d", &n);

	}
	}
    break;
   }while(n > i);

    for( i = 0; i < n; i++){

    	printf("%d\n ", n);

	}


    return 0;

   }

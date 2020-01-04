#include <stdio.h>
#define TAM 3


  int main(){

  	int matriz[TAM][TAM], i, j;


  	for(i = 0; i < TAM; i++){

    for(j = 0; j < TAM; j++){
    printf("Entre com um valor: ");
  	scanf("%d", &matriz[i][j]);



    }

   }

   for(i = 0; i < TAM; i++){

    for(j = 0; j < TAM; j++){


    printf("%d ", matriz[i][j]);

    }
    printf("\n");
   }

   return 0;

  }

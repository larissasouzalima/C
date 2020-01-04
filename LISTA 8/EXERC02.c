#include <stdio.h>


  int main(){

   const TAM = 10;
  int matriz[TAM][TAM], x, y;

  for(x = 0; x < TAM; x++){
    for (y = 0; y < TAM; y++){
  matriz[x][y] = 0;


   printf("%d ", matriz[x][y]);
    }

 printf("\n");

  }


  return 0;
  }

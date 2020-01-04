#include <stdio.h>
#include <stdlib.h>
#include <time.h>


  int main(){

  const  TAM = 5;
  int matriz[TAM][TAM],x,y, maior = 0, menor = 0;
  srand(time(NULL));

  for(x = 0; x < TAM; x++){
      for(y = 0; y < TAM; y++){
        y = (rand() % 10);


        if(matriz[x][y] > maior){
        maior = matriz[x][y];

        }

        printf ("%d", matriz[x][y]); //gera valores entre 0 e 500


  }
printf ("\n");

  }
  printf("o valor maior: %d\n", maior);









  return 0;
  }

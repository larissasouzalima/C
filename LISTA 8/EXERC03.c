#include <stdio.h>


  int main(){

  const TAM = 5;
  int matriz[TAM][TAM], x, y;

  for(x = 0; x < TAM; x++){
    for (y = 0; y < TAM; y++){
  matriz[x][y] = 0;

if(x + y == x){
    matriz[x][y] = 1;
}
if(x + y == y){
    matriz[x][y] = 1;
}

if(x == TAM - 1){
    matriz[x][y] = 1;
}
if(y == TAM - 1){
    matriz[x][y] = 1;
}


  printf("%d", matriz[x][y]);

    }

printf("\n");
  }


  return 0;
    }

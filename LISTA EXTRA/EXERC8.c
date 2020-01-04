#include <stdio.h>


  int main(){

  int num, tabuada, resul;

  printf("Digite um valor positivo: ");
  scanf("%d", &num);

  for (tabuada = 0; tabuada <= 10; tabuada++ ){

  resul = num *	tabuada;

  printf("%d * %d = %d\n", num, tabuada, resul);


  }


  	return 0;
  }

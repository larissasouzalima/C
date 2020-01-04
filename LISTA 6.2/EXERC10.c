#include <stdio.h>


  int main()
  {

    int num = 1, soma = 0;

    do{

     soma = soma + num;
     num = num + 1;

    }while(soma <= 250);

    printf("numeros = %d \n", num);


      return 0;

  }

#include <stdio.h>

  int main()
  {

   int x, y, cont = 0;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);

    printf("Digite um valor maior que o primeiro: ");
    scanf("%d", &y);

    while(x >= y){

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);

    printf("Digite um valor maior que o primeiro: ");
    scanf("%d", &y);
    }

    do{

     x = x + 2;
     cont++;

    }while(x < y);

    printf("cont = %d", cont);


      return 0;
  }

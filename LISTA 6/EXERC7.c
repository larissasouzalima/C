#include <stdio.h>


  int main()

  {

  	int num1, num2, cont = 0;

  	do{

  	printf ("Digite o primeiro valor: \n");
  	scanf("%d", &num1);

  	printf ("Digite o segundo valor: \n");
  	scanf("%d", &num2);


	  }while (num1 >= num2);




  	do{
  		num1 = num1 + 2;
  		cont++;


	  }while (num1 < num2);

	printf("cont = %d", cont);

	  return 0;

	  }





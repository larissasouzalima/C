#include<stdio.h>

  int main()
  {

      int pessoa = 0, idade;
      float media = 0;

      printf("\nDigite a sua idade: ");
      scanf("%d", &idade);

      while(idade!= 0){

      pessoa++;
      media = idade + media;
      printf("\nDigite a sua idade: ");
      scanf("%d", &idade);
      }


      media =  media / pessoa;
      printf("\nO numero de pessoas que digitaram eh: %d\n", pessoa);
      printf("\nA idade media das pessoas eh: %.2f\n", media);


      return 0;
  }

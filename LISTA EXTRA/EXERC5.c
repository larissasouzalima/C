#include<stdio.h>

  int main()
  {

      int pessoa = 0, idade, menor = 0, maior = 0;
      float media = 0;

      printf("\nDigite a sua idade: ");
      scanf("%d", &idade);

      while(idade!= 0){

      pessoa++;
      media = idade + media;
      printf("\nDigite a sua idade: ");
      scanf("%d", &idade);


      if(idade < menor){
        menor = idade;
      }

       if (idade > maior){
        maior = idade;

       }
      }


      media =  media / pessoa;
      printf("\nO numero de pessoas que digitaram eh: %d\n", pessoa);
      printf("\nA idade media das pessoas eh: %.2f\n A menor idade eh: %d\n A maior idade eh: %d\n ", media, menor, maior);


      return 0;
  }


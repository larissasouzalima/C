#include <stdio.h>


  int main(){

  int num,resul,resp, tabuada = 0;


  printf("Digite um numero entre 2 e 9: ");
  scanf("%d", &num);

  while(tabuada <= 10){

   resul = num * tabuada;
   printf("%d * %d = \n", num, tabuada);
   scanf("%d", &resp);
   tabuada++;
   if(resp % num == 0){
        ("Correto!");
   } else ("Incorreto!");

  }

  return 0;

  }

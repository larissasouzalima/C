#include <stdio.h>


  int main(){
  	
  int num, tabuada = 0, resul;	
  	
  printf("Digite um valor positivo: ");
  scanf("%d", &num);	
  	
  while(tabuada <=10){
  	 	
  resul = num *	tabuada;  
  printf("%d * %d = %d\n", tabuada, num, resul);
    tabuada++;	
  	
  }

  	return 0;
  }

#include <stdio.h>

  int main()
  
  {
  	
  	 float p1, t1, p2, t2, media1, media2, media_final; 
  	
  	 printf("Entre com a primeira nota: ");
   	 scanf("%f", &p1);
   	 
   	 printf("\nEntre com o primeiro trabalho: ");
   	 scanf("%f", &t1);
   	 
   	 printf("Entre com a segunda nota: ");
   	 scanf("%f", &p2);
   	 
   	 printf("\nEntre com o segundo trabalho: ");
   	 scanf("%f", &t2);
   	
   	media1 = p1 * 0.6 + t1 * 0.4;
   	
   	media2 = p2 * 0.7 + t2 * 0.3;
   	
   	media_final = (media1 + media2) / 2;
   	
   	printf("\nA media final do aluno eh: %.2f", media_final);
   	
   	if (media_final >= 6.0)
   	{
   		printf("\nAprovado");
   		
	   } else {
	   
   	if (media_final >= 4.0){
   		printf ("Recuperacao");
   		
	   } else{
	   	printf("Reprovado");
   	return 0;
  	
  	
  }
}
}

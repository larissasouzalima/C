#include <stdio.h>

  int main()
  
  {
  	
  	int idade;
  	float peso;
  	
  	printf("Digite a sua idade: ");
  	scanf ("%d", &idade);
  	
  	printf("Digite o seu peso: ");
  	scanf("%f", &peso);
  	
  	
  	if(((idade >= 13) && (idade <= 14)) && (peso <=45))
  	{
  		
  		printf("\nA categoria do participante eh: Peso Leve Infantil");
  		
	  }else{
  	
	  if(((idade >= 13) && (idade <= 14)) && (peso >45))
	  {
	  
	  	printf("\nA categoria do participante eh: Peso Pesado Infantil");
	  
	  }	else{
	  	
	  if(((idade >= 15) && (idade <= 17)) && (peso <=60))	
	  {
	  	
	  	printf("\nA categoria do participante eh: Peso Leve Juvenil");
	  	
	  } else{
	  
	  if(((idade >= 15) && (idade <= 17)) && (peso >60))
	  {
	  	
	  	printf("\nA categoria do participante eh: Peso Pesado Juvenil");	
	  	
	  }	else{
	  	
	  if ((idade >= 18) && (peso <= 85))
	  	
	 {
	  	printf("\nA categoria do participante eh: Peso Leve Adulto");	
	  		
	  } else{
	  	
	  	if((idade >= 18) && (peso > 85))
	  	{
	  	
		printf("\nA categoria do participante eh: Peso Pesado Adulto");
		
			return 0;
	  }	  	
	  }	  	
	  }		  		
	  }	  	
	  }		
	  } 
  }

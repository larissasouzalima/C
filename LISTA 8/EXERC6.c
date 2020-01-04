#include <stdio.h>
#define TAM 10

 int main(){

 float  conta, pagar,troco, mesa[TAM][TAM];
 int sair, op, nlin, ncol, i, j;
 
 for(i = 0; i < TAM; i++)
 	for(j = 0; j < TAM; j++) mesa[i][j] = 0.0;
 
 do{
 printf("\nOpcoes:\n(0) registrar valor em uma mesa\n (1) conta da mesa\n(2) pagar conta da mesa\n (3) sair\n");
 printf("\nEscolha uma opcao: ");
 scanf("%d", &op);

 switch(op){

 case 0:

  printf("Entre com a linha da mesa: ");
  scanf("%d", &nlin);
  
  printf("Entre com a coluna da mesa: ");
  scanf("%d", &ncol);
  
  printf("\nEntre com o valor da conta: ");
  scanf("%f", &conta);
  
  mesa[nlin][ncol] = mesa[nlin][ncol] + conta;
  
  break;

 case 1:

  printf("Entre com a linha da mesa: ");
  scanf("%d", &nlin);
  
  printf("Entre com a coluna da mesa: ");
  scanf("%d", &ncol);
  
  printf("\nSeu saldo eh: %.2f", mesa[nlin][ncol]);
  break;

 case 2:

  printf("Entre com a linha da mesa: ");
  scanf("%d", &nlin);
  
  printf("Entre com a coluna da mesa: ");
  scanf("%d", &ncol);
  
  printf("\nEntre com o valor a ser pago: ");
  scanf("%f", &pagar);
  
  troco = pagar - mesa[nlin][ncol];
  if(troco > 0) printf("Precisa de troco!");
  break;

 case 3:

    printf("\nFinalizando operacoes!");
    break;

 default:
    printf("POr favor entre com uma opcao valida!");

 }
 }while(op >= 0 && op < 3);

 return 0;
 }

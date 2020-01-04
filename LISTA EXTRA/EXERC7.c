#include <stdio.h>

 int main(){

 float saldo = 0, saque, deposito;
 int sair;
 char op;
 do{
 printf("\nOpcoes:\n(a) consulta saldo\n (b) saque\n(c) deposito\n (d) sair\n");
 printf("\nEscolha uma opcao: ");
 scanf(" %c", &op);

 switch(op){

 case 'a':

  printf("\nSeu saldo eh: %.2f", saldo);
  break;

 case 'b':

   printf("\nEntre com o valor a ser sacado: ");
   scanf("%f", &saque);
   saldo = saldo - saque;
   break;

 case 'c':

    printf("\nEntre com o valor a ser depositado: ");
    scanf("%f", &deposito);
    saldo = saldo + deposito;
    break;

 case 'd':

    printf("\nFinalizando operacoes!");
    break;

 default:
    printf("POr favor entre com uma opcao valida!");

 }
 }while(op >= 'a' && op <= 'c');

 return 0;
 }

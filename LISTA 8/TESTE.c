#include <stdio.h>
#define TAM 2


  int main(){

  int login, senha, menu, quant,i,livros[TAM],cod = 0;
  char nome_livro[30], nome_autor[30], editora[30], genero[20] , nome;

do{
  printf("\n\nBIBLIOTECA TMAX\n\n");
  printf("Login:");
  scanf("%d", &login);
  printf("Senha: ");
  scanf("%d", &senha);
}while ((login != 0) && (senha != 1));



while ((login == 0) && (senha ==1)){

do{

  printf("\n\nBIBLIOTECA TMAX\n\n");
  printf("0 - Cadastrar livro\n");
  printf("1 - Alterar livro\n");
  printf("2 - Listagem dos livros\n ");
  printf("3 - Listagem dos usuarios\n");
  printf("4 - Listagem das reservas de livros\n");
  printf("\nDigite a opcao que deseja realizar: ");
  scanf("%d", &menu);

}while(menu < 0 || menu > 4);

switch(menu){

case 0:

    printf("\nNome do livro: ");
    scanf("%s", &nome_livro);
    printf("\nNome do autor: ");
    scanf("%s", &nome_autor);
    printf("\nEditora: ");
    scanf("%s", &editora);
    printf("\nGenero: ");
    scanf("%s", &genero);
    printf("\nQuantidade de paginas: ");
    scanf("%d", &quant);
    printf("\nCodigo do livro: ");
    scanf("%d", &cod);


  break;

case 1:


    break;

case 2:

    printf("LISTAGEM DE LIVROS\n\n");
    printf("%d", livros[cod]);


     break;

case 3:

    break;

case 4:

    break;
}



  }


  return 0;
  }

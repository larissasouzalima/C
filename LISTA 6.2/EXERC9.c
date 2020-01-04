#include <stdio.h>

  int main()
{
    int valor1, valor2;

    do{
    printf("\nDigite um valor: ");
    scanf("%d", &valor1);

    printf("\nDigite um valor maior: ");
    scanf("%d", &valor2);

    }while(valor2 < valor1);

    printf("Finalizando");

    return 0;
}

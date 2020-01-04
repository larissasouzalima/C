#include <stdio.h>

  int main()
  {

   int i, j;

     printf("Insira um valor positivo: ");
     scanf("%d", &j);
for(i = 0; i < 10; i++){
if((i == 3) || (i == 5)) continue;
j = j + i;
printf("j = %d\n", j);
}
return 0;
  }

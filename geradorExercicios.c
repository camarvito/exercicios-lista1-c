#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int i;
  srand(21);

  printf("Gerando 10 valores aleatorios:\n\n");
  
  for (i = 0; i < 10; i++)
  {
    /* gerando valores aleatórios entre zero e 100 */
    printf("%d ", rand() % 40);
  }
  
  return 0;
}
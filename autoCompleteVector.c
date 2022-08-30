#include <stdio.h>

int main()
{
  int i = 0;
  int vetor[100];

  while (i < 100)
  {
    vetor[i] = (i % 2 == 0) ? 0 : 1;
    ++i;
    printf(i);
  }

  i = 0;
  while (i < 100)
  {
    printf("%i", vetor[i]);
  }

  return 0;
}
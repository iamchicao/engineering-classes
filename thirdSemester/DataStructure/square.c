// Rev_1: revision of variables and repetition controls
// Draw a rectangle of asterisks (*) on the canvas
// Where the user must enter the size.
// Example for user asking 4:

//* * * *
//* * * *
//* * * *
//* * * *

#include <stdio.h>

int main()
{
  int quantidade, linha, coluna;

  printf("Digite a quantidade de asteristicos\n");
  scanf("%i", &quantidade);

  for (linha = 0; linha < quantidade; linha++)
  {
    printf("\n");
    for (coluna = 0; coluna < quantidade; coluna++)
    {
      printf("*");
    }
  }
  return 0;
}
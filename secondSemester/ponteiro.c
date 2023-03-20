#include <stdio.h>

int main()
{
  int *apNumero; // apontamento para um valor inteiro
  int x = 34;
  int y = 71;

  printf("Hexadecimal");
  printf("\n %x", apNumero);
  printf("\n %x conteudo %d", &x, x);
  printf("\n %x conteudo %d", &y, y);

  printf("\nDecimal");
  printf("\n %d", apNumero);
  printf("\n %d conteudo %d", &x, x);
  printf("\n %d conteudo %d", &y, y);

  printf("\nOctal");
  apNumero = &x;
  printf("\n %o conteudo %d", apNumero, *apNumero);

  apNumero = &y;
  printf("\n %o conteudo %d", apNumero, *apNumero);

  printf("\n A soma de x + y = %d", apNumero + x); //Equivale a y + x

  return 0;
}
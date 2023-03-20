#include <stdio.h>

int main()
{
  int x = 10, y = 2;
  int z[10];
  int *apNumero;
  int *apCopia;

  apNumero = &x;
  *apNumero = 0;

  ++x;

  z[0] = *apNumero;
  *apNumero += 10;
  apCopia = apNumero
}

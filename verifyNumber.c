#include <stdio.h>

// a == b, a!=b, a>b, a<b
// se a par/impar
// se b par/impar
// se ambos par
// se ambos impar

int main()
{
  int a, b;

  printf("Type the value of A: ");
  scanf("%d", &a);

  printf("Type the value of B: ");
  scanf("%d", &b);

  if (a == b)
    printf("The value of A is equal to the value of B");
  else if (a != b)
    printf("The value of A is different from the value of B");
  else if (a > b)
    printf("The value of A is greater than the value of B");
  else
    printf("The value of A is less than the value of B");

  if ((a % 2 == 0) && (b % 2 == 0))
    printf("\nBoth values are even");
  else if ((a % 2 != 0) && (b % 2 != 0))
    printf("\nBoth values are odd");

  if (a % 2 == 0)
    printf("\nThe value of A is even");
  else
    printf("\nThe value of A is odd");

  if (b % 2 == 0)
    printf("\nThe value of B is even");
  else
    printf("\nThe value of B is odd");
}
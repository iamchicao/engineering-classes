#include <stdio.h>

// a == b, a!=b, a>b, a<b
// se a par/impar
// se b par/impar
// se ambos par
// se ambos impar

int main()
{
  int a, b;

  printf("Type the value of a: ");
  scanf("%d", &a);

  printf("Type the value of b: ");
  scanf("%d", &b);

  if (a == b)
    printf("The value of a is equal to the value of b");
  else if (a != b)
    printf("The value of a is different from the value of b");
  else if (a > b)
    printf("The value of a is greater than the value of b");
  else
    printf("The value of a is less than the value of b");

  if ((a % 2 == 0) && (b % 2 == 0))
    printf("\nBoth values are even");
  else if ((a % 2 != 0) && (b % 2 != 0))
    printf("\nBoth values are odd");

  if (a % 2 == 0)
    printf("\nThe value of a is even");
  else
    printf("\nThe value of a is odd");
}
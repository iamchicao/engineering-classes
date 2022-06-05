#include <stdio.h>

int main()
{
  int n, num;
  int i = 0;

  printf("Enter an integer: ");
  scanf("%i", &n);
  printf("Enter an integer: ");
  scanf("%i", &num);

  while (i < n)
  {
    printf("%i ", num);
    ++i;
  }
  return 0;
}
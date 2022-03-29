#include <stdio.h>

int main()
{
  float reals = 0, dollars = 0;

  printf("Enter the value of dollars: ");
  scanf("%f", &dollars);

  reals = dollars * 4.77;

  printf("The value of reals is: %.2f", reals);
}
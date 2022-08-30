#include <stdio.h>

int currentYear = 2022;
int YearWasBorn = 1997;
int age = 0;

int main()
{
  printf("Type your year was a born: ");
  scanf("%d", &YearWasBorn);

  age = currentYear - YearWasBorn;
  printf("Age: %d", age);
  return 0;
}
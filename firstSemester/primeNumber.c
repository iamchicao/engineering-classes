#include <stdio.h>

int main()
{
  int primeNumber = 0, number = 0;

  printf("Enter a number: ");
  scanf("%i", &number);

  while (
      number != 0)
  {
    if (number == 1)
    {
      printf("Invalid number, please try again");
      printf("\n");
      printf("Enter a number: ");
      scanf("%i", &number);
    }
    else
    {
      for (int i = 2; i < number; i++)
      {
        if (number % i == 0)
        {
          primeNumber = 1;
          break;
        }
      }
      if (primeNumber == 0)
      {
        printf("%i is a prime number", number);
      }
      else
      {
        printf("%i is not a prime number", number);
      }
      printf("\n");
      printf("Enter a number: ");
      scanf("%i", &number);
    }
  }
}
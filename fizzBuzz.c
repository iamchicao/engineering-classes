#include <stdio.h>

int main()
{
  int number;

  printf("Type your number: ");
  scanf("%i", &number);

  for (unsigned int i = 1; i <= number; i++)
  {
    if (i % 15 == 0)
    {
      printf("FizzBuzz\n");
    }
    else if (i % 3 == 0)
    {
      printf("Fizz\n");
    }
    else if (i % 5 == 0)
    {
      printf("Buzz\n");
    }
    else
    {
      printf("%i\n", i);
    }
  }
}

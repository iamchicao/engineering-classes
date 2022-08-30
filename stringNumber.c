#include <stdio.h>

int main()
{
  char string[10];
  int number = 0;

  printf("Enter a string from 0 to 10: ");
  scanf("%s", string);
  while (string[number] != '\0')
  {
    ++number;
  }
  printf("%i characters", number);
  return 0;
}

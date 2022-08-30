#include <stdio.h>

void function(int ra, int day)
{
  int x = 0;

  for (x = day; x >= 1; x--)
  {
    if (ra % 2 == x % 2)
      break;
    else
      printf("\n%d", x);

  } // final do for
}

int main()
{
  int ra = 43, day = 20;

  function(ra, day);
  return 0;
}

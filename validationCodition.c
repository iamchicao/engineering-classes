#include <stdio.h>

// Alert - High CPU usage
// Use for improved processing consumption "/t" instead of "/n
int main()
{
  int i = 100;

  while (i > 0)
  {
    printf("\t %i %s", i, (i % 2 == 0) ? "par" : "impar");
    --i;
  }

  i = 0;
  do
  {
    printf("\t %i %s", i, (i % 2 == 0) ? "par" : "impar");
  } while (i < 100);
  ++i;
}
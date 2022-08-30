#include <stdio.h>

int main()
{
  int i, j;
  int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int number;

  printf("Enter a value: ");
  scanf("%i", &number);

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%i", matriz[i][j]);
      if (matriz[i][j] == number)
      {
        printf("\nFound in the line %i and column %i", i, j);
        break;
      }
      else if (matriz[i][j] == matriz[2][2])
      {
        printf("\nNot found");
      }
    }
    printf("\n");
    if (matriz[i][j] == number)
    {
      break;
    }
  }
}
// Rev_2: revision of variables and repetition controls
// Draw a right triangle of asterisks (*) on the canvas
// Where the user must enter the size.
// Example for user asking 4:

//*
//* *
//* * *
//* * * *

// This one can be done with two for

#include <stdio.h>

int main(void)
{
  int amount, line, column;

  printf("Type the amount: ");
  scanf("%d", amount);

  for (line = 1; line < amount; line++)
  {
    for (column = 1; column <= line; column++)
    {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
#include <stdio.h>

void main()
{
  // I changed the name of the variables and the Function because I wrote it in English
  int vector[100];
  int x = 0;
  int y = 0;
  int z = 0;
  int quantity = 0; // added variable quantity
  int average;

  for (x = 0; x < 10; x++)
  {
    printf("Type 100 whole numbers: "); // adding the printf command to tell the user what to put in
    scanf("%d", &vector[x]);

    z = z + (vector[x] % 2 == 0 ? vector[x] : 0);
    quantity = quantity + (vector[x] % 2 == 0 ? 1 : 0);
  }

  average = z / quantity;
  y = 0;

  for (x = 0; x <= 10; x++)
  {
    // changed the 1 to 0 so it can identify that the number is odd - Validation condition
    if (vector[x] % 2 == 1 && (vector[x] < average))
    {
      y++;
      printf("Odd number below the average: %d\n", vector[x]);
    }
  }

  printf("Number of odd ones below the average of even ones: %d \n", y); // added semicolon replaced x by y
  printf("Sum of the even numbers: %d\n", z);                            // added print to display sum of even numbers
  printf("Average of the sum of even numbers: %d", average);             // added printf to display average of sum of even numbers
} // Final Function
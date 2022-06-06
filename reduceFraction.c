#include <stdbool.h>
#include <stdio.h>

// Reduce Fraction function - return reduceFraction of two numbers
int reduceFraction(int numerator, int denominator)
{
  int reduceFraction, remainder;

  while (numerator != 0)
  {
    remainder = denominator % numerator;
    denominator = numerator;
    numerator = remainder;
  }
  reduceFraction = denominator;

  return reduceFraction;
} // end reduceFraction function

// main function
int main()
{
  // declarations
  int number1, number2, newNumber1, newNumber2;

  // get user input
  printf("Enter a fraction in format a/b: ");
  scanf("%d/%d", &number1, &number2);

  if (number2 == 0)
  {
    printf("Cannot divide by zero");
  }
  else
  {
    // calculations
    // find the reduce Fraction of numerator and denominator
    // then divide both the numerator and denominator by the Reduce Fraction
    newNumber1 = number1 / reduceFraction(number1, number2);
    newNumber2 = number2 / reduceFraction(number1, number2);

    // results
    printf("In lowest terms: %d/%d", newNumber1, newNumber2);
  }
}
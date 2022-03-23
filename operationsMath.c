#include <stdio.h>

int main()
{
  float firstNumber = 0;
  float secondNumber = 0;
  float thirdNumber = 0;
  float fourthNumber = 0;

  printf("Please, enter the value of first number: ");
  scanf("%f", &firstNumber);

  printf("Please, enter the value of second number: ");
  scanf("%f", &secondNumber);

  printf("Please, enter the value of third number: ");
  scanf("%f", &thirdNumber);

  printf("Please, enter the value of fourth number: ");
  scanf("%f", &fourthNumber);

  float firstOperation = firstNumber + secondNumber;
  printf("The result of the sum of the numbers is: %.2f", firstOperation);
  printf("\n");

  float secondOperation = firstNumber + thirdNumber;
  printf("The result of the sum of the numbers is: %.2f", secondOperation);
  printf("\n");

  float thirdOperation = firstNumber + fourthNumber;
  printf("The result of the sum of the numbers is: %.2f", thirdOperation);
  printf("\n");

  float fourthOperation = secondNumber + thirdNumber;
  printf("The result of the sum of the numbers is: %.2f", fourthOperation);
  printf("\n");

  float fifthOperation = secondNumber + fourthNumber;
  printf("The result of the sum of the numbers is: %.2f", fifthOperation);
  printf("\n");

  float sixthOperation = thirdNumber + fourthNumber;
  printf("The result of the sum of the numbers is: %.2f", sixthOperation);
  printf("\n");

  float seventhOperation = firstNumber * secondNumber;
  printf("The result of the multiplication of the numbers is: %.2f", seventhOperation);
  printf("\n");

  float eighthOperation = firstNumber * thirdNumber;
  printf("The result of the multiplication of the numbers is: %.2f", eighthOperation);
  printf("\n");

  float ninthOperation = firstNumber * fourthNumber;
  printf("The result of the multiplication of the numbers is: %.2f", ninthOperation);
  printf("\n");

  float tenthOperation = secondNumber * thirdNumber;
  printf("The result of the multiplication of the numbers is: %.2f", tenthOperation);
  printf("\n");

  float eleventhOperation = secondNumber * fourthNumber;
  printf("The result of the multiplication of the numbers is: %.2f", eleventhOperation);
  printf("\n");

  float twelfthOperation = thirdNumber * fourthNumber;
  printf("The result of the multiplication of the numbers is: %.2f", twelfthOperation);
  printf("\n");
}
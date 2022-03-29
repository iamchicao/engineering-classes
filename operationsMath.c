#include <stdio.h>

int main()
{
  float firstNumber = 0, secondNumber = 0, thirdNumber = 0, fourthNumber = 0;

  float firstOperation, secondOperation, thirdOperation, fourthOperation, fifthOperation, sixthOperation, seventhOperation, eighthOperation, ninthOperation, tenthOperation, eleventhOperation, twelfthOperation;

  printf("Please, enter the value of first number: ");
  scanf("%f", &firstNumber);

  printf("Please, enter the value of second number: ");
  scanf("%f", &secondNumber);

  printf("Please, enter the value of third number: ");
  scanf("%f", &thirdNumber);

  printf("Please, enter the value of fourth number: ");
  scanf("%f", &fourthNumber);

  firstOperation = firstNumber + secondNumber;
  printf("The result of the sum of the numbers is: %.2f", firstOperation);
  printf("\n");

  secondOperation = firstNumber + thirdNumber;
  printf("The result of the sum of the numbers is: %.2f", secondOperation);
  printf("\n");

  thirdOperation = firstNumber + fourthNumber;
  printf("The result of the sum of the numbers is: %.2f", thirdOperation);
  printf("\n");

  fourthOperation = secondNumber + thirdNumber;
  printf("The result of the sum of the numbers is: %.2f", fourthOperation);
  printf("\n");

  fifthOperation = secondNumber + fourthNumber;
  printf("The result of the sum of the numbers is: %.2f", fifthOperation);
  printf("\n");

  sixthOperation = thirdNumber + fourthNumber;
  printf("The result of the sum of the numbers is: %.2f", sixthOperation);
  printf("\n");

  seventhOperation = firstNumber * secondNumber;
  printf("The result of the multiplication of the numbers is: %.2f", seventhOperation);
  printf("\n");

  eighthOperation = firstNumber * thirdNumber;
  printf("The result of the multiplication of the numbers is: %.2f", eighthOperation);
  printf("\n");

  ninthOperation = firstNumber * fourthNumber;
  printf("The result of the multiplication of the numbers is: %.2f", ninthOperation);
  printf("\n");

  tenthOperation = secondNumber * thirdNumber;
  printf("The result of the multiplication of the numbers is: %.2f", tenthOperation);
  printf("\n");

  eleventhOperation = secondNumber * fourthNumber;
  printf("The result of the multiplication of the numbers is: %.2f", eleventhOperation);
  printf("\n");

  twelfthOperation = thirdNumber * fourthNumber;
  printf("The result of the multiplication of the numbers is: %.2f", twelfthOperation);
  printf("\n");
}
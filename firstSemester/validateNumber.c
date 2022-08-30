int main()
{
  int firstNumber, secondNumber, thirdNumber;
  printf("Enter 3 numbers: ");
  scanf("%i %i %i", &firstNumber, &secondNumber, &thirdNumber);

  if (firstNumber == secondNumber || firstNumber == secondNumber || firstNumber == thirdNumber)
  {
    printf("The numbers are the same");
  }
  else if (firstNumber <= secondNumber && firstNumber <= thirdNumber)
  {
    printf("%i %i %i", firstNumber, secondNumber, thirdNumber);
  }
  else if (secondNumber > firstNumber && secondNumber > thirdNumber)
  {
    printf("%i %i %i", secondNumber, firstNumber, thirdNumber);
  }
  else if (thirdNumber <= firstNumber && thirdNumber <= secondNumber)
  {
    printf("%i %i %i", thirdNumber, firstNumber, secondNumber);
  }
}
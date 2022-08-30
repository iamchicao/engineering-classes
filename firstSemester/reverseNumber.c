int main()
{
  int number, reverseNumber, rest;
  printf("Enter a number of up to 4 digits: ");

  scanf("%d", &number);

  reverseNumber = 0;

  while (number > 0)
  {
    rest = number % 10;
    reverseNumber = reverseNumber * 10 + rest;
    number = number / 10;
  }
  printf("The inverted number is %d\n", reverseNumber);

  if (reverseNumber % 2 == 0)
  {
    printf("The original number is even\n");
  }
  else
  {
    printf("The original number is odd\n");
  }
}
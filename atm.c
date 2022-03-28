#include <stdio.h>

int main()
{
  int withdrawal = 0, reals200, reals100, reals50, reals20, reals10, reals5, reals2 = 0;

  printf("Enter your withdrawal amount: ");
  scanf("%i", &withdrawal);

  if (withdrawal <= 0)
  {
    printf("Invalid amount, please try again.\n");
    printf("Enter the value greater than 0 reals");

    return 1;
  }

  if ((withdrawal == 1 || withdrawal == 3))
  {
    printf("Invalid amount, please try again.\n");
    printf("Enter the value greater than 1 or 3 reals");

    return 1;
  }

  /* Switch Case
    switch (withdrawal)
    {
    case 0:
      printf("Invalid amount, please try again");
      printf("\n");
      printf("Enter the value greater than 0 reals");
      break;

    case 1:
      printf("Invalid amount, please try again");
      printf("\n");
      printf("Enter the value greater than 1 reals");
      break;

    case 3:
      printf("Invalid amount, please try again");
      printf("\n");
      printf("Enter the value greater than 3 reals");
      break;

    default:
      break;
    }
    */

  if (withdrawal % 5 == 1 || withdrawal % 5 == 3)
  {
    withdrawal = withdrawal - 4;
    reals2 = 2;
  }

  reals200 = withdrawal / 200;
  withdrawal = withdrawal % 200;

  reals100 = withdrawal / 100;
  withdrawal = withdrawal % 100;

  reals50 = withdrawal / 50;
  withdrawal = withdrawal % 50;

  reals20 = withdrawal / 20;
  withdrawal = withdrawal % 20;

  reals10 = withdrawal / 10;
  withdrawal = withdrawal % 10;

  reals5 = withdrawal / 5;
  withdrawal = withdrawal % 5;

  reals2 = (withdrawal / 2) + reals2;

  printf("banknotes of R$200,00 = %d\n", reals200);
  printf("banknotes of R$100,00 = %d\n", reals100);
  printf("banknotes of R$50,00 = %d\n", reals50);
  printf("banknotes of R$20,00 = %d\n", reals20);
  printf("banknotes of R$10,00 = %d\n", reals10);
  printf("banknotes of R$5,00 = %d\n", reals5);
  printf("banknotes of R$2,00 = %d\n", reals2);

  return 0;
}

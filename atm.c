#include <stdio.h>

int main()
{
  int withdrawal = 0, reals200, reals100, reals50, reals20, reals10, reals5, reals2 = 0;

  printf("Enter your withdrawal amount: ");
  scanf("%i", &withdrawal);

  switch (withdrawal)
  {
  case 0:
    printf("Invalid amount, please try again");
    printf("\n");
    printf("Enter the value greater than 0 reals");
    return 1;

  case 1:
    printf("Invalid amount, please try again");
    printf("\n");
    printf("Enter the value greater than 1 reals");

    return 1;

  case 3:
    printf("Invalid amount, please try again");
    printf("\n");
    printf("Enter the value greater than 3 reals");
    return 1;

  default:
    break;
  }

  if (withdrawal % 5 == 1 || withdrawal % 5 == 3)
  {
    withdrawal = withdrawal - 4;
    reals2 = 2;
  }

  if (reals200 = withdrawal / 200)
  {
    withdrawal = withdrawal % 200;
    printf("banknotes of R$200,00 = %d\n", reals200);
  };

  if (reals100 = withdrawal / 100)
  {
    withdrawal = withdrawal % 100;
    printf("banknotes of R$100,00 = %d\n", reals100);
  };

  if (reals50 = withdrawal / 50)
  {
    withdrawal = withdrawal % 50;
    printf("banknotes of R$50,00 = %d\n", reals100);
  };

  if (reals20 = withdrawal / 20)
  {
    withdrawal = withdrawal % 20;
    printf("banknotes of R$20,00 = %d\n", reals20);
  };

  if (reals10 = withdrawal / 10)
  {
    withdrawal = withdrawal % 10;
    printf("banknotes of R$10,00 = %d\n", reals10);
  };

  if (reals5 = withdrawal / 5)
  {
    withdrawal = withdrawal % 5;
    printf("banknotes of R$5,00 = %d\n", reals5);
  };

  if ((reals2 = (withdrawal / 2) + reals2))
  {
    printf("banknotes of R$2,00 = %d\n", reals2);
  };

  return 0;
}

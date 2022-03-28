#include <stdio.h>

int main()
{
  char id[30];
  int code_piece;
  float price_piece, quantity_sold, totalValue;

  printf("What is your id? ");
  scanf("%s", &id);

  printf("What is the piece code? ");
  scanf("%i", &code_piece);

  printf("What is the price of the piece? ");
  scanf("%f", &price_piece);

  printf("What is the quantity of the piece? ");
  scanf("%f", &quantity_sold);

  totalValue = quantity_sold * price_piece;
  totalValue *= 0.05;

  printf("The id of saller %s who sold the piece %i ammounting to %.2f and the amount %.0f received the commission from %.2f", id, code_piece, price_piece, quantity_sold, totalValue);
};
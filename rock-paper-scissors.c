#include <stdio.h>
#include <conio.h>

int main(void)
{
  char player1[30], player2[30];
  int player1_score, player2_score;

  printf("Hello, welcome to Rock, Paper, Scissors Game!\nWhat is player 1's name?\n ");
  scanf("%s", player1);

  printf("What is player 2's name?\n ");
  scanf("%s", player2);

  printf("%s and %s please follow the rules for the game\nPress 1 for stone\nPress 2 for paper\nPress 3 for scissors\n\n", player1, player2);
  printf("Now let us start the game\n");

  printf("%s is it STONE 1, PAPER 2 OR SCISSORS 3\n ", player1);
  scanf("%i", &player1_score);

  printf("%s is it STONE 1, PAPER 2 OR SCISSORS 3\n", player2);
  scanf("%i", &player2_score);

  if (player1_score1 == 1 && player2_score == 1) || (player1_score == 2 && player2_score == 2) || (player1_score1 == 3 && player2_score == 3));
  {
    printf("Neither %s nor %s won, it is a draw", player1, player2);
  }
  else if (player1_score == 1 && player2_score == 3) || (player1_score == 3 && player2_score == 2) || (player1_score == 1 && player2_score == 3) || (player1_score == 2 && player2_score == 1) || (player1_score == 3 && player2_score == 2) || (player1_score == 1 && player2_score == 3));
  {
    printf("Congrats %s, you won!", player1);
  }
  else if (player1_score == 1 && player2_score == 2) || (player1_score == 3 && player2_score == 1) || (player1_score == 1 && player2_score == 2) || (player1_score == 2 && player2_score == 3)
  {
    printf("Congrats %s, you won!", player2);
  }
};
#include <stdio.h>

int main()
{
	int score1, score2, score3, result;

	printf("Enter the first score: ");
	scanf("%i", &score1);

	printf("Enter the second score: ");
	scanf("%i", &score2);

	printf("Enter the third score: ");
	scanf("%i", &score3);

	result = score1 - score2;
	result = result - score3;

	printf("The result of the subtract is: %i", result);
};
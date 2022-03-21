#include <stdio.h>

int main() {
	int score1;
	int score2;
	int score3;
	int result = 0;
	
	printf("Enter the first score: ");
	scanf("%i", &score1);
	
	printf("Enter the second score: ");
	scanf("%i", &score2);
	
	printf("Enter the third score: ");
	scanf("%i", &score3);
	

	
	
	int subtract(score1, score2, score3) {
	   int result = 0;
		printf("%i %i %i ", score1, score2, score3);
		printf("xablau");
		
		result = score1 - score2;
		result = result-score3;
	
		printf("%i", result);
	
	   return result;
	}
	
	printf(subtract);

	

};

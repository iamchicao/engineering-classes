#include <stdio.h>

void main() {
	int grade1 = 0;
	int grade2 = 0;
	int cumulativeGrade = 0;
	
	printf("Please, enter the value of first grade", grade1);
	scanf("%i", grade1);
	
		
	printf("Please, enter the value of second grade", grade2);
	scanf("%i", grade2);
	
	int cumulativeGrade ( int grade1, int grade2) {
		int result;
		result = grade1 + grade2;
		
		return result;
	};
	
};

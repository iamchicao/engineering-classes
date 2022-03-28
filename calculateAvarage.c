#include <stdio.h>

int main()
{
	float grade1 = 0, grade2 = 0, result = 0;

	printf("Please, enter the value of first grade: ");
	scanf("%f", &grade1);

	printf("Please, enter the value of second grade: ");
	scanf("%f", &grade2);

	result = (grade1 + grade2) / 2;

	printf("The result of the sum of the grades is: %f", result);
};

#include <stdio.h>

int main()
{
	int grade1 = 0;
	int grade2 = 0;

	printf("Please, enter the value of first grade: ");
	scanf("%i");

	printf("Please, enter the value of second grade: ", grade2);
	scanf("%i", grade2);

	int cumulativeGrade(int grade1, int grade2)
	{
		int result = grade1 + grade2;

		return result;
	};
};

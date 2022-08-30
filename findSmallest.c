/*
Find the smallest
Write a program that finds the smallest of several integers.

Assume that the first value read specifies the number of values ​​remaining.
*/

#include <stdio.h>

int main()
{
    int n, num, small;
    int i = 0;

    printf("Enter an integer: ");
    scanf("%i", &n);
    printf("Enter an integer: ");
    scanf("%i", &num);
    small = num;
    while (i < n)
    {
        printf("%i ", num);
        if (num < small)
        {
            small = num;
        }
        ++i;
        printf("Enter an integer: ");
        scanf("%i", &num);
    }
    printf("\n");
    printf("The smallest number is %i\n", small);
    return 0;
}
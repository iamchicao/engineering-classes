#include <stdio.h>

int main()
{
    int sum;
    int i = 1;

    while (i <= 15)
    {
        if (i % 2 == 1)
        {
            sum += i;
        }
        i++;
    }
    printf("%i", sum);
    return 0;
}
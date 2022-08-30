/*
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 1000000; i++)
        printf("[%d] Susanna Hoffs\n", i);

    return 0;
}
*/

/*The code above takes longer to execute because it is printing information on the screen, line by line, unlike /r, which becomes a replace.
The replace replaces the number by creating a dynamic instead of static as in /n.
*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 1000000; i++)
        printf("[%d] Susanna Hoffs\r", i);

    return 0;
}
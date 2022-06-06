#include <stdio.h>

int main() {
    int sum = 0;
    int i = 2;
    while (i <= 30) {
        if (i % 2 == 0) {
            sum += i;
        }
        i++;
    }
    printf("%i\n", sum);
    return 0;
}
/*
Write a program that reads the vowels.txt file, validates only lowercase or uppercase vowels
and perform the vowel frequency calculation and the percentage of vowels in the file.
*/

#include <stdio.h>
int main()
{
    FILE *file;
    char ch;
    int count = 0;
    int total = 0;
    float percent = 0;
    file = fopen("mussumimpsum.txt", "r"); // open file
    if (file == NULL)
    {
        printf("Error opening file");
        return 0;
    }
    while ((ch = fgetc(file)) != EOF) // read file
    {
        // validate only lowercase or uppercase vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
        }
        total++;
    }

    percent = (count * 100) / total;
    printf("Total vowels: %d and the percentage of vowels in the file: %.2f", count, percent);
    // Todo: implement the logic to print words that contain vowels or only vowels

    fclose(file);

    return 0;
}
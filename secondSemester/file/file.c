#include <stdio.h>
int main(int argc, char *argv[])
{
  FILE *fp;
  int i;
  char name[51]; // 50 characters + 1 for the null character (not to burst memory)
  if ((fp = fopen("nameAnimals.txt", "w")) != NULL)
  {
    for (i = 0; i < 10; i++)
    {
      printf("\nWrite the name of an animal: ");
      fgets(name, 50, stdin); // Reads a maximum of 50 letters
      fprintf(fp, "Animal %d: %s\n", i + 1, name);
    }
    // Final for
    fclose(fp);
  }
  else
    printf("Cannot open file");

  system("pause");
}
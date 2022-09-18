/*
A CSV (comma-separated values) file is a text file that has a specific formatting pattern through a structured table.
in which the separation of the information is given by a comma (comma). Suppose the existence of a text file of type CSV containing
the names, weights (in kg), and heights (in meters) of several people, as in the following example:

"Curtis James Jackson III",79,1.72
"Tupac Amaru Shakur",98,1.81
"Calvin Cordozar Broadus Jr",77,1.73

Write a program that reads the records from the file and calculates and displays each person's BMI (Body Mass Index).
BMI is given by:
BMI=weight/(height*height)
*/

//Todo: Print each person's name and BMI

#include <stdio.h>

int main()
{
  FILE *file;
  char name[100];
  float weight, height, imc;
  file = fopen("bmi_table.csv", "r");  // Open the file for reading
  if (file == NULL)
  {
    printf("Error opening file");
    return 1;
  }
  while (fscanf(file, "%[^,],%f,%f ", name, &weight, &height) != EOF)  //%[^,] means that it will read until it finds a comma
  {
    imc = weight / (height * height);
    printf("%s: %.2f \n", name, imc);
  }

  if (imc < 18.5)
  {
    printf("\nYou are underweight");
  }
  else if (imc >= 18.5 && imc <= 24.9)
  {
    printf("\nYou are normal weight");
  }
  else if (imc >= 25 && imc <= 29.9)
  {
    printf("\nYou are overweight");
  }
  else if (imc >= 30 && imc <= 34.9)
  {
    printf("\nYou are obese");
  }
  else if (imc >= 35 && imc <= 39.9)
  {
    printf("\nYou are severely obese");
  }
  else if (imc >= 40)
  {
    printf("\nYou are morbidly obese");
  }

  fclose(file);
  return 0;
}
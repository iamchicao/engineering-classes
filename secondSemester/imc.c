// Calculate the BMI and incidate the level as entered by the user

#include <stdio.h>

int main()
{
  float weight, height, imc;
  printf("Enter your height in centimeters: ");
  scanf("%f", &height);
  height = 2* height;

  printf("Enter your weight in kilograms: ");
  scanf("%f", &weight);
  
  imc = height / weight;
  printf("Your IMC is: %.2f", imc);

  if (imc < 18.5)
  {
    printf("You are underweight");
  }
  else if (imc >= 18.5 && imc <= 24.9)
  {
    printf("You are normal weight");
  }
  else if (imc >= 25 && imc <= 29.9)
  {
    printf("You are overweight");
  }
  else if (imc >= 30 && imc <= 34.9)
  {
    printf("You are obese");
  }
  else if (imc >= 35 && imc <= 39.9)
  {
    printf("You are severely obese");
  }
  else if (imc >= 40)
  {
    printf("You are morbidly obese");
  }
}
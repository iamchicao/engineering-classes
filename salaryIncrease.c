#include <stdio.h>
int main()
{
  // Declaring variables as floats
  float salary, salary_increase, salary_increase_percentage;

  // Data entry
  printf("Enter your salary: ");
  scanf("%f", &salary);

  // Data processing to calculate the increase
  if (salary <= 1500)
  {
    salary_increase_percentage = 0.35;
  }
  else
  {
    salary_increase_percentage = 0.15;
  };

  /* Operator ternary
  salary <= 1500 ? salary_increase_percentage = 0.35 : salary_increase_percentage = 0.15;
   */

  salary_increase = salary * salary_increase_percentage;
  salary = salary + salary_increase;

  // Data output
  printf("Your salary is %.2f\n", salary);
}
#include <stdio.h>

int main()
{
  float timeSpending, averageSpeed;

  printf("Enter time spent on the trip in hours? ");
  scanf("%f", &timeSpending);

  printf("Tell us the speed in km/h? ");
  scanf("%f", &averageSpeed);

  float distance = timeSpending * averageSpeed;
  float consumption = distance / 12;
  timeSpending = distance / averageSpeed;
  averageSpeed = distance / timeSpending;

  printf("The distance traveled was: %.2f km\n", distance);
  printf("The consumption was: %.2f liters\n", consumption);
  printf("The time spent was: %.2f hours\n", timeSpending);
  printf("The average speed was: %.2f km/h\n", averageSpeed);
}
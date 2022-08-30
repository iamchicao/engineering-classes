#include <stdio.h>
// passed as parameter a vector with 10 positions already filled
int Media3and5(int vector[10])
{                     
  int x; // used to scroll through the vector
  int quantity = 0; // used to know how many multiples of 3 and 5
  int sum = 0; // used to sum the numbers multiples of 3 and 5

  for (x = 0; x < 10; x++)
  {
    sum = sum + ((vector[x] % 3 == 0 && vector[x] % 5 == 0) ? 0 : vector[x]);
    quantity = quantity + ((vector[x] % 3 == 0 && vector[x] % 5 == 0) ? 0 : 1);
  }
  return (sum / quantity);
}

int main()
{
  int vector[10] = {40,70,90,100,200,300,400,500,600,700};
  printf("%d", Media3and5(vector));
}
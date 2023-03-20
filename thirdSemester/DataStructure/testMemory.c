// check the amount of variables
// dynamics that can be created on your machine with the simple_type structure
#include <stdio.h>
#include <stdlib.h>

struct simple_type
{
  float num[10000]; // 10.000
  struct simple_type *first;
};

// memory leak
// the pointer marks a space in memory, after it runs again, it writes a new address and forgets the previous one, but the previous one remains filled.
// In this run we'll allocate and throw away, that's the idea
int main(void)
{
  struct simple_type *repo; // dynamic memory allocation - *(pointer)
  int amount = 0;
  while (1 == 1)
  { // Inifinite Loop
    if (!(repo = malloc(sizeof(struct simple_type))))
    { // Malloc - Allocate space in memory
      printf("Out of memory! \n");
      return -1; // Any number other than 0, there was a problem
    }
    amount++;
    printf("Amount: %d \n", amount); // use /t for tab - less cpu usage
  }
  return 0; // success return
}
#include <stdio.h>
#include <stdlib.h>

// We can #define ARRAY_SIZE as a constant for the compiler.
// This makes the compiler treat the word ARRAY_SIZE in the code
// as if it were the number 100.
#define ARRAY_SIZE 100

int numbers[ARRAY_SIZE];

int sum(){
  // TODO: calculate and return the sum of the numbers array. 
  return 5; // this is almost definitely wrong.
}

int avg(){
  // TODO: calculate and return the average of the numbers array. 
  return 25; // this is probably wrong, but might be right.
}

void print_numbers(){
  // TODO: print out all the numbers
  return;
}


int main(void)
{
  int i=0;
  for(i=0; i < ARRAY_SIZE; i++) {
    // fill array with random numbers between 0...50
    numbers[i] = rand() % 50;
  }
  print_numbers();
  printf("The sum of numbers is: %d\n", sum());
  printf("The avg of numbers is: %d\n", avg());
  
  return 0;
}
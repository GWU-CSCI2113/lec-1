#include <stdio.h>

int main(void)
{
  double PI = 3.1415926535897932384626433;
  int n = 2;
  printf("My favorite numbers are %d and %lf", n, PI);
  printf("pi = %.2lf\n", PI);
  printf("pi = %.9lf\n", PI);
  printf("pi = %d ????\n", PI);
  return 0;
}

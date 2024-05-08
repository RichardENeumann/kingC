// Compute the mathematical constant e to a grade of approximation n determined by the user

#include <stdio.h>

int main(void) {
  int n;
  float e = 1, f = 1;

  printf("Enter to what degree you want to approximate e: ");
  scanf("%d", &n);

  for (float i = 1; i <= n; i++) {
    f *= i;
    e += 1.0f / f;
  }

  printf("The constant e approximated to the degree of %d is: %f\n", n, e);

  return 0;
}
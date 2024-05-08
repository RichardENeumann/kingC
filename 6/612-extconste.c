// Compute the mathematical constant e to a grade of approximation n determined by the user

#include <stdio.h>

int main(void) {
  int m;
  float n, e = 1, f = 1;

  printf("Enter to what degree you want to approximate e: ");
  scanf("%d", &m);
  printf("Enter stopping point for the addition: ");
  scanf("%f", &n);

  for (float i = 1; i <= m; i++) {
    f *= i;
    if (1.0f / f < n) {
      break;
    }
    e += 1.0f / f;
  }

  printf("The constant e approximated to the degree of %d is: %f\n", m, e);

  return 0;
}
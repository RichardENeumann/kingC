// Sums a series of numbers using double variables

#include <stdio.h>

int main(void) {
  double n, sum = 0;

  printf("This program sums a series of integers\n");
  printf("Enter integers (0 to terminate): ");
  scanf("%lF", &n);
  while (n != 0) {
    sum += n;
    scanf("%lF", &n);
  }
  printf("The sum is: %.2lF\n", sum);

  return 0;
}
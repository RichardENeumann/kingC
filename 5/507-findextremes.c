// Find the largest and smallest of 4 given integers

#include <stdio.h>

int main(void) {
  int a, b, c, d;

  printf("Enter 4 integers separated by a space: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  if (a > b && a > c && a > d) {
    printf("Largest: %d\n", a);
  } else if (b > a && b > c && b > d) {
    printf("Largest: %d\n", b);
  } else if (c > a && c > b && c > d) {
    printf("Largest: %d\n", c);
  } else if (d > a && d > b && d > c) {
    printf("Largest: %d\n", d);
  }

  if (a < b && a < b && a < d) {
    printf("Smallest: %d\n", a);
  } else if (b < a && b < c && b < d) {
    printf("Smallest: %d\n", b);
  } else if (c < a && c < b && c < d) {
    printf("Smallest: %d\n", c);
  } else if (d < a && d < b && d < c) {
    printf("Smallest: %d\n", d);
  }

  return 0;
}
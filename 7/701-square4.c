// Find limits of integer types with square program

// short: i >= 32767 -> i will overflow
// int: i >= 46341 -> i * i will overflow 
// long: 

#include <stdio.h>

int main(void) {
  int n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  for (long i = 1; i <= n; i++) {
    printf("%20li%20li\n", i, i * i);
  }

  return 0;
}
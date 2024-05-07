// Asks the user to enter a fraction, then reduces it to the lowest terms

#include <stdio.h>

int main(void) {
  int num, denom, remainder, m, n;

  printf("Enter a fraction: ");
  scanf("%d/%d", &num, &denom);

  m = num;
  n = denom;

  while (n > 0) {
    remainder = m % n;
    m = n; 
    n = remainder;
  }

  num /= m;
  denom /= m;

  printf("In lowest terms: %d/%d\n", num, denom);

  return 0;
}
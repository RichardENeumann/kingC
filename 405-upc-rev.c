// Computes a Universal Product Code check digit, revised

#include <stdio.h>

int main(void) {
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, firstSum, secondSum, total, checkDigit;

  printf("Please enter the 11 digit UPC code: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);

  firstSum = d + i2 + i4 + j1 + j3 + j5;
  secondSum = i1 + i3 + i5 + j2 + j4;
  total = (3 * firstSum) + secondSum;
  checkDigit = 9 - ((total - 1) % 10);

  printf("The check digit is: %1d\n", checkDigit);

  return 0 ;
}
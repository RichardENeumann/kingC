// check wether a given UPC code is valid by calculating the checkDigit and comparing it to the given one

#include <stdio.h>

int main(void) {
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, c1, firstSum, secondSum, total, checkDigit;

  printf("Please enter the 12 digit UPC code: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &c1);

  firstSum = d + i2 + i4 + j1 + j3 + j5;
  secondSum = i1 + i3 + i5 + j2 + j4;
  total = (3 * firstSum) + secondSum;
  checkDigit = 9 - ((total - 1) % 10);

  if (c1 == checkDigit) {
    printf("The given UPC is VALID\n");
  } else {
    printf("The given UPC is INVALID\n");
  }

  return 0 ;
}
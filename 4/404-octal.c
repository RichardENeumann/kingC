#include <stdio.h>

int main(void) {
  int decimal;
  int a, b, c, d, e;

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &decimal);

  e = decimal % 8;
  d = (decimal / 8) % 8;
  c = ((decimal / 8) / 8) % 8;
  b = (((decimal / 8) / 8) / 8) % 8;
  a = ((((decimal / 8) / 8) / 8) / 8) %8;

  printf("In octal, your number is: %1d%1d%1d%1d%1d\n", a, b, c, d, e);
  return 0;
}
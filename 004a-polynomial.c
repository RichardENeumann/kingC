#include <stdio.h>

int main(void) {
  int x = 0;
  int poly = 0;

  puts("This program will calculate the following polynomial with the value given for x.");
  puts("3x⁵+2x⁴-5x³-x²+7x-6");
  printf("Please enter the value for x: ");
  scanf("%d", &x);

  poly = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  printf("The calculated value by Horner's Rule is %d\n", poly);
  
  return 0;
}
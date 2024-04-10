#include <stdio.h>

#define TAX_FACTOR 1.05

int main(void) {
  float dollarAmount = 0.0f;

  puts("This program will calculate how much a given amount is with a 5%% tax added.");
  printf("Please enter the amount of dollars and cents: ");
  scanf("%f", &dollarAmount);

  printf("The amount with 5%% tax added is $%.2f\n", dollarAmount * TAX_FACTOR);

  return 0;
}
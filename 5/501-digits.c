// This program will tell you how many digits a given number < 10000 has

#include <stdio.h>

int main (void) {
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (number >= 0 && number < 10) {
    printf("The number %d has 1 digit.\n", number);
  }
  if (number >= 10 && number < 100) {
    printf("The number %d has 2 digits.\n", number);
  }
  if (number >= 100 && number < 1000) {
    printf("The number %d has 3 digits.\n", number);
  }
  if (number >= 1000 && number < 10000) {
    printf("The number %d has 4 digits.\n", number);
  }

  return 0;
}
// Reverses the digit order for a given integer

#include <stdio.h>

int main(void) {
  int input;

  printf("Enter an integer: ");
  scanf("%d", &input);

  printf("The reversed number is: ");
  
  do {
    printf("%d", input % 10);
    input /= 10;
  } while (input != 0);

  printf("\n");

  return 0;
}
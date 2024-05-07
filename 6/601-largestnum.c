// Asks a user to enter one number after another and display the largest one after a number  <= 0 is entered

#include <stdio.h>

int main(void) {
  float input, largest = 0;

  for (;;) {
    printf("Enter a number: ");
    scanf("%f", &input);
    if (input <= 0) {
      break;
    } else {
      if (input >= largest) {
        largest = input;
      }
    }
  }
  printf("The largest number entered was %.2f\n", largest);

  return 0;
}
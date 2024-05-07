// Displays all even squares in a range from 0 to given number

#include <stdio.h>

int main(void) {
  int count;

  printf("Enter a number: ");
  scanf("%d", &count);

  for (int i = 1; i * i <= count; i++) {
    if (i * i % 2 == 0) {
      printf("%d\n", i * i);
    }
  }

  return 0;
}
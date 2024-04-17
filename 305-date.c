#include <stdio.h>

int main(void) {
  int month = 0;
  int day = 0;
  int year = 0;

  printf("Enter a date: ");
  scanf("%d/%d/%d", &month, &day, &year);
  printf("You entered %d%d%d\n", year, month, day);
  return 0;
}
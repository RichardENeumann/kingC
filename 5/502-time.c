// This program will display a given 24h time as 12h time

#include <stdio.h>

int main(void) {
  int hours, minutes;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  if (hours > 12) {
    printf("Equivalent 12-hour time: %02d:%02d PM\n", hours - 12, minutes);
  } else {
    printf("Equivalent 12-hour time: %02d:%02d AM\n", hours, minutes);
  }

  return 0;
}
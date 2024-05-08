// Print a calendar where the user can enter starting day and number of weeks

#include <stdio.h>

int main(void) {
  int days, start, weekday, count;

  printf("Enter number of days in the month: ");
  scanf("%d", &days);
  printf("Enter starting day of the week: (1=Sun, 7=Sat): ");
  scanf("%d", &start);

  weekday = 1;
  count = 1;

  for (int i = 1; count <= days; i++) {
    if (i < start) {
      printf("   ");
    } else {
      printf(" %2d", count); 
      count++;
    }
    if (weekday == 7) {
      printf("\n");
      weekday = 1;
    } else {
      weekday++;
    }
  }
  printf("\n");

  return 0;
}
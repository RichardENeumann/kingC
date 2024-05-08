// Tell the user which of the two entered dates comes earlier in the calendar

#include <stdio.h>

int main(void) {
  int day1, day2, month1, month2, year1, year2;

  // Initialize earliest date
  month2 = -1;
  day2 = -1;
  year2 = -1;
  
  for (;;) {
    printf("Enter a date (mm/dd/yy) (0/0/0 to see result): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);

    // Exit loop when user enters 0/0/0 or similar
    if (month1 == 0 && day1 == 0 && year1 == 0) {
      break;
    }
    
    // On first iteration set earliest date to input date
    if (month2 < 0 && day2 < 0 && year2 < 0) {
      month2 = month1;
      day2 = day1;
      year2 = year1;
    }

    // If the entered date is earlier, store as new earliest date
    if (year1 < year2) {
      month2 = month1;
      day2 = day1;
      year2 = year1;
    } else if (year1 == year2) {
      if (month1 < month2) {
        month2 = month1;
        day2 = day1;
      } else if (month1 == month2) {
        if (day1 < day2) {
          month2 = month1;
          day2 = day1;
          year2 = year1;
        }
      }
    }
  }

  printf("The earliest date is: %02d/%02d/%02d\n", month2, day2, year2);

  return 0;
}
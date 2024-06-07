// Will tell the user the closest flight departure time from a time entered in the 12-hour format

#include <stdio.h>
#include <ctype.h>

int main(void) {
  int hours, minutes, midnightMinutes, dep1, dep2, dep3, dep4, dep5, dep6, dep7, dep8;
  int temp1, temp2;
  char dayOffset;

  printf("Enter a 12-hour time: ");
  scanf("%2d:%2d %1c", &hours, &minutes, &dayOffset);

  // User entry expressed in minutes since midnight
  // check for A/AM/P/PM suffix and add 12 hours accordingly
  if (toupper(dayOffset) == 'P') {
      hours += 12;
  }
  printf("24-hour format: %2d:%2d\n", hours, minutes);

  midnightMinutes = (hours * 60) + minutes;

  // Scheduled departure times expressed in minutes since midnight
  dep1 = 8 * 60;
  dep2 = (9 * 60) + 43;
  dep3 = (11 * 60) + 19;
  dep4 = (12 * 60) + 47;
  dep5 = 14 * 60;
  dep6 = (15 * 60) + 45;
  dep7 = 19 * 60;
  dep8 = (21 * 60) + 45;

  // Find the closest departure time
  if (midnightMinutes <= dep1) {
    printf("Closest departure time is 8:00 AM, arriving at 10:16 AM.\n");
  } else if (midnightMinutes <= dep2) {
    temp1 = midnightMinutes - dep1;
    temp2 = dep2 - midnightMinutes;
    if (temp2 <= temp1) {
      printf("Closest departure time is 9:43 AM, arriving at 11:52 AM.\n");
    } else {
      printf("Closest departure time is 8:00 AM, arriving at 10:16 AM.\n");
    }
  } else if (midnightMinutes <= dep3) {
    temp1 = midnightMinutes - dep2;
    temp2 = dep3 - midnightMinutes;
    if (temp2 <= temp1) {
      printf("Closest departure time is 11:19 AM, arriving at 1:31 PM.\n");
    } else {
      printf("Closest departure time is 9:43 AM, arriving at 11:52 AM.\n");
    }
  } else if (midnightMinutes <= dep4) {
    temp1 = midnightMinutes - dep3;
    temp2 = dep4 - midnightMinutes;
    if (temp2 <= temp1) {
      printf("Closest departure time is 12:47 AM, arriving at 3:00 PM.\n");
    } else {
      printf("Closest departure time is 11:19 AM, arriving at 1:31 PM.\n");
    }
  } else if (midnightMinutes <= dep5) {
    temp1 = midnightMinutes - dep4;
    temp2 = dep5 - midnightMinutes;
    if (temp2 <= temp1) {
      printf("Closest departure time is 2:00 PM, arriving at 4:08 PM.\n");
    } else {
      printf("Closest departure time is 12:47 AM, arriving at 3:31 PM.\n");
    }
  } else if (midnightMinutes <= dep6) {
    temp1 = midnightMinutes - dep5;
    temp2 = dep6 - midnightMinutes;
    if (temp2 <= temp1) {
      printf("Closest departure time is 3:45 PM, arriving at 5:55 PM.\n");
    } else {
      printf("Closest departure time is 2:00 PM, arriving at 4:08 PM.\n");
    }
  } else if (midnightMinutes <= dep7) {
    temp1 = midnightMinutes - dep6;
    temp2 = dep7 - midnightMinutes;
    if (temp2 <= temp1) {
      printf("Closest departure time is 7:00 PM, arriving at 9:20 PM.\n");
    } else {
      printf("Closest departure time is 3:45 PM, arriving at 5:55 PM.\n");
    }
  } else if (midnightMinutes <= dep8) {
    temp1 = midnightMinutes - dep7;
    temp2 = dep8 - midnightMinutes;
    if (temp2 <= temp1) {
      printf("Closest departure time is 9:45 PM, arriving at 11:58 PM.\n");
    } else {
      printf("Closest departure time is 7:00 PM, arriving at 9:20 PM.\n");
    }
  } else if (midnightMinutes > dep8) {
    printf("Closest departure time is 9:45 PM, arriving at 11:58 PM.\n");
  }
  
  return 0;
}
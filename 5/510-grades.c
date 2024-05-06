// Converts a numerical grade to a letter grade

#include <stdio.h>

int main(void) {
  int grade, tens;

  printf("Enter numerical grade: ");
  scanf("%d", &grade);

  tens = grade / 10;

  if (grade > 100 || grade < 0) {
    printf("The mark you entered is out of range.\n");
  } else {
    switch (tens) {
      case 9:
        printf("Letter grade: A\n");
        break;
      case 8:
        printf("Letter grade: B\n");
        break;
      case 7:
        printf("Letter grade: C\n");
        break;
      case 6:
        printf("Letter grade: D\n");
        break;
      default: 
        printf("Letter grade: F\n");
        break;
    }
  }

  return 0;
}
// Find limits of integer types with square program

// short: i >= 32767 -> i will overflow
// int: i >= 46341 -> i * i will overflow 
// long: 

#include <stdio.h>

int main(void) {
  int n;
  unsigned char d;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);
  getchar(); // Clear \n from buffer
  
  d = 0;

  for (int i = 1; i <= n; i++) {
    if (d == 24) {
      d = 0;
      printf("Press enter to continue...");
        while (getchar() != '\n') 
          ;
    }
    printf("%10d%10d\n", i, i * i);  
    d++;
  }

  return 0;
}
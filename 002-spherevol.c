#include <stdio.h>

#define PI 3.14156f

int main(void) {
  int radius = 10;

  printf("The volume of a 10m radius sphere is %.2f cubic metres.\n", ((4.0f/3.0f) * PI * radius * radius * radius));

  return 0;
}
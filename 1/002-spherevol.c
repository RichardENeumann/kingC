#include <stdio.h>

#define PI 3.14156f

int main(void) {
  float radius = 0;

  puts("This program will calculate the volume of a sphere by its given radius.");
  puts("Please enter the radius of the sphere in metres:");
  scanf("%f", &radius);

  printf("The volume of a %.2fm radius sphere is %.2f cubic metres.\n", radius, ((4.0f/3.0f) * PI * radius * radius * radius));

  return 0;
}
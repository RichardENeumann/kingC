// This will display the Beaufort scale description to a given windspeed

#include <stdio.h>

int main(void) {
  float windSpeed;

  printf("Please enter the wind speed in knots: ");
  scanf("%f", &windSpeed);

  printf("The wind speed is described on the Beaufort scale as: ");
  if (windSpeed < 1) {
    printf("Calm\n");
  } else if (windSpeed <= 3) {
    printf("Light air\n");
  } else if (windSpeed <= 27) {
    printf("Breeze\n");
  } else if (windSpeed <= 47) {
    printf("Gale\n");    
  } else if (windSpeed <= 63) {
    printf("Storm\n");
  } else if (windSpeed > 63 ) {
    printf("Hurricane\n");
  }
    
  return 0;
}
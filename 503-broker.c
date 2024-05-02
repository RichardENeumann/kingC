// This program will calculate a broker's commission

#include <stdio.h>

int main(void) {
  float commission, value, price, rivalCommission;
  int numberOfShares;

  printf("Enter the number of shares: ");
  scanf("%d", &numberOfShares);
  printf("Enter the price per share: ");
  scanf("%f", &price);

  value = numberOfShares * price;

  if (value < 2500.00f) {
    commission = 30.00f + .017f * value;
  } else if (value < 6250.00f) {
    commission = 56.00f + .0066f * value;
  } else if (value < 20000.00f) {
    commission = 75.00f + .0034f * value;
  } else if (value < 50000) {
    commission = 100.00f + .0022f * value;
  } else if (value < 500000) {
    commission = 155.00f + .0009f * value;
  } else {
    commission = 255.00f + .0009f * value;
  }

  if (commission < 39.00f) {
    commission = 39.00f;
  }

  // Calculate the rival brokers would-be commission

  if (numberOfShares < 2000) {
    rivalCommission = 33.00f + .03f * numberOfShares;
  } else {
    rivalCommission = 33.00f + .02f * numberOfShares;
  }

  printf("Commision: $%.2f\n", commission);
  printf("The rival broker's would-be commission: $%.2f\n", rivalCommission);
  
  return 0;
}
// This program will calculate a broker's commission for any value anew until 0 is entered

#include <stdio.h>

int main(void) {
  float commission, value, price;
  int numberOfShares;

  for (;;) {
    printf("Enter the number of shares, \"0\" to exit: ");
    scanf("%d", &numberOfShares);
    if (numberOfShares == 0) {
      break;
    }
    printf("Enter the price per share: ");
    scanf("%f", &price);

    value = numberOfShares * price;
    
    // Compute the commission 
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
    // Minimum amout is always $39
    if (commission < 39.00f) {
      commission = 39.00f;
    }
    printf("Commission: $%.2f\n", commission);
  }

  return 0;
}
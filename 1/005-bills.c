#include <stdio.h>

int main(void) {
  int dollarAmount = 0;
  int twentyBills = 0;
  int tenBills = 0;
  int fiveBills = 0;
  int oneBills = 0;
  
  printf("Please enter the amount of money: ");
  scanf("%d", &dollarAmount);

  twentyBills = dollarAmount / 20;
  tenBills = (dollarAmount - (twentyBills * 20)) / 10;
  fiveBills = (dollarAmount - (twentyBills * 20) - (tenBills * 10)) / 5;
  oneBills = (dollarAmount - (twentyBills * 20) - (tenBills * 10) - (fiveBills * 5)) / 1;

  printf("The amount of $%d can be paid out in\n$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n", 
    dollarAmount, twentyBills, tenBills, fiveBills, oneBills); 
  
  return 0;
}
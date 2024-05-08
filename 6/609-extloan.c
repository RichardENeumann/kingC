// Display the monthly credit balance afte user inputs loan, interest and payment rates

#include <stdio.h>

int main(void) {
  float loan, interest, payment;
  float monthly, balance;
  int numPayments;
  
  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  
  printf("Enter interest rate: ");
  scanf("%f", &interest);

  printf("Enter monthly payment: ");
  scanf("%f", &payment);
  
  printf("Enter number of payments: ");
  scanf("%d", &numPayments);
  
  monthly = ((interest / 100) / 12) + 1;

  balance = loan;

  for(int i = 1; i <= numPayments; i++) {
    balance = balance * monthly - payment;
    if (balance >= 0) {
      printf("Balance remaining after payment number %d: %.2f\n", i, balance);
    } else {
      printf("The loan has been repaid after payment number %d.\n", i);
      break;
    }
  }

  return 0;
}
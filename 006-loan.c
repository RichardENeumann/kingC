#include <stdio.h>

int main(void) {
  float loan = 0.0f;
  float interest = 0.0f;
  float payment = 0.0f;

  float monthly = 0.0f;
  float first = 0.0f;
  float second = 0.0f;
  float third = 0.0f;
  
  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  
  printf("Enter interest rate: ");
  scanf("%f", &interest);

  printf("Enter monthly payment: ");
  scanf("%f", &payment);
  
  monthly = ((interest / 100) / 12) + 1;

  first = (loan * monthly) - payment;
  second = (first * monthly) - payment;
  third = (second * monthly) - payment;

  printf("Balance remaining after first payment: $%.2f\n", first);
  printf("Balance remaining after second payment: $%.2f\n", second);
  printf("Balance remaining after third payment: $%.2f\n", third);

  return 0;
}
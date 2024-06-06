// Print the memory size of different data types on this machine

#include <stdio.h>

int main(void) {
  int i;
  short s;
  long l;
  float f;
  double d;
  long double ld;
  char c;

  printf("The size of an int on this machine is %zu\n", sizeof(i));
  printf("The size of a short on this machine is %zu\n", sizeof(s));
  printf("The size of a long on this machine is %zu\n", sizeof(l));
  printf("The size of a float on this machine is %zu\n", sizeof(f));
  printf("The size of a double on this machine is %zu\n", sizeof(d));
  printf("The size of a long double on this machine is %zu\n", sizeof(ld));
  printf("The size of a char on this machine is %zu\n", sizeof(c));

  return 0;
}
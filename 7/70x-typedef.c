// Define 8, 16 and 32 bit integer types with typedef

#include <stdio.h>

typedef char Int8;
typedef short Int16;
typedef long Int32;


int main(void) {
  Int8 a = 0;
  Int16 b = 0;
  Int32 c = 0;

  printf("Int8 is %zu byte(s) long.\n", sizeof(a));
  printf("Int16 is %zu byte(s) long.\n", sizeof(b));
  printf("Int32 is %zu byte(s) long.\n", sizeof(c));

  return 0;
}
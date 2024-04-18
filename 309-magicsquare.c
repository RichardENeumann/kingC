#include <stdio.h>

int main(void) {
  int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0;
  int nine = 0, ten = 0, eleven = 0, twelve = 0, thirteen = 0, fourteen = 0, fifteen = 0, sixteen = 0;

  printf("Enter the numbers from 1 to 16 in any order:\n");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &one, &two, &three, &four, &five, &six, &seven, &eight,
    &nine, &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);

  printf("%2d %2d %2d %2d\n", one, two, three, four);
  printf("%2d %2d %2d %2d\n", five, six, seven, eight);
  printf("%2d %2d %2d %2d\n", nine, ten, eleven, twelve);
  printf("%2d %2d %2d %2d\n", thirteen, fourteen, fifteen, sixteen);

  printf("Row sums: %2d %2d %2d %2d\n", (one + two + three + four), (five + six + seven + eight),
    (nine + ten + eleven + twelve), (thirteen + fourteen + fifteen + sixteen));
  printf("Column sums: %2d %2d %2d %2d\n", (one + five + nine + thirteen), (two + six + ten + fourteen),
    (three + seven + eleven + fifteen), (four + eight + twelve + sixteen));
  printf("Diagonal Row sums: %2d %2d\n", (one + six + eleven + sixteen), (four + seven + ten + thirteen));
  
  return 0;
}
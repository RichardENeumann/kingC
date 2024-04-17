#include <stdio.h>

int main(void) {
  int gs1 = 0;
  int groupId = 0;
  int pubCode = 0;
  int itemNum = 0;
  int checkDigit = 0;

  printf("Please enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &gs1, &groupId, &pubCode, &itemNum, &checkDigit);

  printf("GS1 prefix: %d\n", gs1);
  printf("Group Identifier: %d\n", groupId);
  printf("Publisher code: %d\n", pubCode);
  printf("Item Number: %d\n", itemNum);
  printf("Check digit: %d\n", checkDigit);

  return 0;
}
#include <stdio.h>

void print_binary(int decimal) {
  if (decimal == 0) {
    return;
  }
  print_binary(decimal / 2);
  printf("%d", decimal % 2);
}

int main() {
  int decimal;
  printf("Enter a decimal number: ");
  scanf("%d", &decimal);
  print_binary(decimal);
  printf("\n");
  return 0;
}

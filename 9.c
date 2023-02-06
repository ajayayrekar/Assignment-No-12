#include <stdio.h>

void print_octal(int decimal) {
  if (decimal == 0) {
    return;
  }
  print_octal(decimal / 8);
  printf("%d", decimal % 8);
}

int main() {
  int decimal;
  printf("Enter a decimal number: ");
  scanf("%d", &decimal);
  print_octal(decimal);
  printf("\n");
  return 0;
}

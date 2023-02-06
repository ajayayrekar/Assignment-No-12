#include <stdio.h>

void print_reverse(int number) {
  if (number == 0) {
    return;
  }
  printf("%d", number % 10);
  print_reverse(number / 10);
}

int main() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  print_reverse(number);
  printf("\n");
  return 0;
}

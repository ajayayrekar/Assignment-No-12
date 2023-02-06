#include <stdio.h>

void print_natural_numbers_reverse(int n) {
  if (n <= 0) {
    return;
  }
  printf("%d\n", n);
  print_natural_numbers_reverse(n - 1);
}

int main() {
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  print_natural_numbers_reverse(n);
  return 0;
}

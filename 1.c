#include <stdio.h>

void print_natural_numbers(int n) {
  if (n <= 0) {
    return;
  }
  printf("%d\n", n);
  print_natural_numbers(n - 1);
}

int main() {
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  print_natural_numbers(n);
  return 0;
}

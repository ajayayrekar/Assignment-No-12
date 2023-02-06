#include <stdio.h>

void print_odd_natural_numbers_reverse(int n, int i) {
  if (n <= 0) {
    return;
  }
  printf("%d\n", 2 * i - 1);
  print_odd_natural_numbers_reverse(n - 1, i + 1);
}

int main() {
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  print_odd_natural_numbers_reverse(n, n);
  return 0;
}

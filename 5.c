#include <stdio.h>

void print_even_natural_numbers(int n, int i) {
  if (n <= 0) {
    return;
  }
  printf("%d\n", 2 * i);
  print_even_natural_numbers(n - 1, i + 1);
}

int main() {
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  print_even_natural_numbers(n, 1);
  return 0;
}

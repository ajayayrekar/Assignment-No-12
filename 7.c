#include <stdio.h>

void print_squares_of_natural_numbers(int n, int i) {
  if (n <= 0) {
    return;
  }
  printf("%d\n", i * i);
  print_squares_of_natural_numbers(n - 1, i + 1);
}

int main() {
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  print_squares_of_natural_numbers(n, 1);
  return 0;
}

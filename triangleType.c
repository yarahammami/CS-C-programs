// This C Program determines the type of a triangle given the dimensions of its 3 edges.

#include <stdio.h>

int main() {
  int a, b, c;

  printf("Enter the dimensions of the triangle: ");
  scanf("%d %d %d", &a, &b, &c);

  if (a + b > c && a + c > b && b + c > a) {
    if (a == b && b == c) {
      printf("Equilateral triangle\n");
    } else if (a == b || a == c || b == c) {
      printf("Isosceles triangle\n");
    } else {
      printf("Scalene triangle\n");
    }
  } else {
    printf("Not a triangle\n");
  }

  return 0;
}
// OUTPUT EXAMPLE
// Enter the dimensions of the triangle: 9 5 6
// Scalene triangle


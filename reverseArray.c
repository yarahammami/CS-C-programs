// This C Program reverses a given array of integers.

#include <stdio.h>

void reverseArray(int arr[], int n) {
  int i, j, temp;
  for (i = 0, j = n - 1; i < j; i++, j--) {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}

int main() {
  int arr[100], n, i;

  printf("Enter number of elements in the array: ");
  scanf("%d", &n);

  printf("Enter %d integers: ", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  reverseArray(arr, n);

  printf("Reversed array: ");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
// OUTPUT EXAMPLE
// Enter number of elements in the array: 5
// Enter 5 integers: 1 2 3 4 5 
// Reversed array: 5 4 3 2 1


// This C Program inserts an element into an array of integers at a given index.

#include <stdio.h>

void insertElement(int arr[], int n, int index, int element) {
  int i;
  for (i = n - 1; i >= index; i--) {
    arr[i + 1] = arr[i];
  }
  arr[index] = element;
}

int main() {
  int arr[100], n, i, index, element;

  printf("Enter number of elements in the array: ");
  scanf("%d", &n);

  printf("Enter %d integers: ", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Enter the index where you want to insert the element: ");
  scanf("%d", &index);

  printf("Enter the element you want to insert: ");
  scanf("%d", &element);

  insertElement(arr, n, index, element);
  n++;

  printf("Array after inserting the element: ");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
// OUTPUT EXAMPLE
// Enter number of elements in the array: 5
// Enter 5 integers: 1 2 4 5 6
// Enter the index where you want to insert the element: 2
// Enter the element you want to insert: 3
// Array after inserting the element: 1 2 3 4 5 6


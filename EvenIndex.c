// This C Program prints all characters in a string that have an even index.

#include <stdio.h>

int main() {
  char str[100];
  int i;

  printf("Enter a string: ");
  scanf("%s", str);

  printf("Characters with even index: ");
  for (i = 0; str[i] != '\0'; i++) {
    if (i % 2 == 0) {
      printf("%c ", str[i]);
    }
  }

  return 0;
}
// OUTPUT EXAMPLE
// Enter a string: codingsensation
// Characters with even index: c d n s n a i n


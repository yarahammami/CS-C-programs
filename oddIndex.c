// This C Program prints all characters in a string that have an odd index.

#include <stdio.h>

int main() {
  char str[100];
  int i;

  printf("Enter a string: ");
  scanf("%s", str);

  printf("Characters with odd index: ");
  for (i = 0; str[i] != '\0'; i++) {
    if (i % 2 != 0) {
      printf("%c ", str[i]);
    }
  }

  return 0;
}
// OUTPUT EXAMPLE
// Enter a string: codingsensation
// Characters with odd index: o i g e s t o


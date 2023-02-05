// This C Program generates a random password of a given length.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_OF_CHARACTERS 62

char characters[NUM_OF_CHARACTERS] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
                                       'h', 'i', 'j', 'k', 'l', 'm', 'n',
                                       'o', 'p', 'q', 'r', 's', 't', 'u',
                                       'v', 'w', 'x', 'y', 'z',
                                       'A', 'B', 'C', 'D', 'E', 'F', 'G',
                                       'H', 'I', 'J', 'K', 'L', 'M', 'N',
                                       'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                                       'V', 'W', 'X', 'Y', 'Z',
                                       '0', '1', '2', '3', '4', '5', '6',
                                       '7', '8', '9'};

void generatePassword(int length, char password[]) {
  int i;

  srand(time(NULL));

  for (i = 0; i < length; i++) {
    password[i] = characters[rand() % NUM_OF_CHARACTERS];
  }

  password[length] = '\0';
}

int main() {
  int length;
  char password[100];

  printf("Enter the length of the password: ");
  scanf("%d", &length);

  generatePassword(length, password);

  printf("Password: %s\n", password);

  return 0;
}
// OUTPUT EXAMPLE
// Enter the length of the password: 10
// Password: kespHzCNho


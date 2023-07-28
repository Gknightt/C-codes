#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<stdlib.h.>
#include <ctype.h>
#include <time.h>

#define MAX_TRIES 6
#define MAX_PASSWORD_LENGTH 100

void passwordAuthentication() {
  char temp;
  char pass[] = "pupqc123";
  char user_input[MAX_PASSWORD_LENGTH + 1]; // Increase array size to accommodate the null terminator
  int remaining_tries = MAX_TRIES;
  int i;
  int backspaces = 0;

  while (remaining_tries > 0) {
    printf("Enter password: ");
    // Accept password and hide every inputted character with '*'
    i = 0;
    backspaces = 0;

    while (1) {
      temp = getch();

      if (temp == '\b') {
        if (i > 0) {
          i--;
          backspaces++;
          printf("\b \b");
        }
      } else if (temp == '\r' || temp == '\n') {
        break;
      } else {
        printf("*");
        user_input[i] = temp;
        i++;
      }
    }

    // Remove the characters corresponding to the backspaces
    for (int j = 0; j < backspaces; j++) {
      user_input[i - j] = '\0';
    }

    user_input[i] = '\0'; // put a null character at the end of the string
    printf("\n"); // add a new line every time the scan is finished

    if (strcmp(user_input, pass) == 0) {
      printf("Welcome to PUP Quezon City!\n");
      // insert the main menu func
      break;
    } else if (strcmp(user_input, pass) != 0 && remaining_tries > 1) {
      printf("\nWrong password!");
      printf("\nRemaining tries: %d\n", remaining_tries - 1);
      system("cls");
    }
    remaining_tries--;

    if (remaining_tries == 0) {
      printf("\nEntry Denied! Only authorized personnel can access.\n");
    }

    printf("-------------------------------------------------------\n");
  }
}

int main() {
  passwordAuthentication();
  return 0;
}

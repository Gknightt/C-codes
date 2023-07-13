#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX_TRIES 6

void passwordAuthentication() {
  char temp;
  char pass[] = "pupqc123";
  char user_input[100];
  int remaining_tries = MAX_TRIES;
  int i;
  int backspaces = 0;

  while (remaining_tries > 0) {
    printf("Enter password: ");
    // Accept password and hide every inputted character with '*'
    for (i = 0; i < sizeof(user_input) - 1; i++) {
      temp = getch();

      if (temp == '\b' && temp != user_input[100]) {
        backspaces++;
        printf("\b \b");
      } else {
        printf("*");
        user_input[i] = temp;
      }
      if (temp == '\r' || temp == '\n') {
        break;
      }
      user_input[i] = temp;
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

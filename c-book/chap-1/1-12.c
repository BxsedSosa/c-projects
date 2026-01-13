#include <stdio.h>

#define IN 1;
#define OUT 0;

int check_for_in_word(char c) {
  if (c != ' ' && c != '\n' && c != '\t') {
    return IN;
  }
  return OUT;
}

int main() {
  int c, state;
  char *str[100];

  while ((c = getchar()) != EOF) {
    state = check_for_in_word(c);

    if (state == 1) {
      putchar(c);
    }

    if (state == 0) {
      printf("\n");
    }
  }
  return 0;
}

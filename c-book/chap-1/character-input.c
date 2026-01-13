#include <stdio.h>
int main() {
  int c;

  int result = (c = getchar()) != EOF;
  while ((c = getchar()) != EOF) {
    printf("%d\n", result);
    putchar(c);
  }

  return 0;
}

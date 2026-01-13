#include <stdio.h>
#include <stdlib.h>

#define IN 1;
#define OUT 0;

void display_array(int array[10]) {
  for (int i = 0; i < 10; i++) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int *createEmptyArray() {
  static int arr[10];

  for (int i = 0; i < 10; i++) {
    arr[i] = 0;
  }

  return arr;
}

int check_for_in_word(char c) {
  if (c != ' ' && c != '\n' && c != '\t') {
    return IN;
  }
  return OUT;
}

int check_state(int state) { return state == 1; }

int main() {
  // int words_char_count[10];
  int c, counter, state, i;
  int *word_counts = createEmptyArray();
  char saved_words[10][100] = {};
  i = counter = 0;

  while ((c = getchar()) != EOF) {

    state = check_for_in_word(c);
    if (check_state(state)) {
      counter++;
    } else {
      word_counts[i] = counter;
      saved_words[i][9] = putchar(c);
      i++;
      counter = 0;
    }

    display_array(word_counts);
    for (int i = 0; i < 10; ++i) {
      printf("%s\n", saved_words[i]);
    }
  }

  return 0;
}

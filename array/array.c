#include "array.h"
#include <stdio.h>

char *arr[1000];
int currEnd = 0;

int main() {
  add("testing");
  add("Brother");
  add("HUH");

  printArray();

  printf("GOT VALUE: %s\n", get(1));
  return 0;
}

void add(char *p) { arr[currEnd++] = p; }
char *get(int index) { return arr[index]; }

void printArray() {
  for (int i = 0; i < currEnd; i++) {
    printf("Index: %3d Value: %s\n", i, arr[i]);
  }
}

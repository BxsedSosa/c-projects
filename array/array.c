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

  pop();

  add("hello world");
  printArray();
  erase(1);

  add("another test");
  printArray();

  insert(1, "cup");
  printArray();

  replace(0, "keyboard");
  printArray();
  return 0;
}

void add(char *p) { arr[currEnd++] = p; }
void replace(int idx, char *p) { arr[idx] = p; }
void insert(int idx, char *p) {
  for (int i = currEnd; i >= idx; i--) {
    arr[i + 1] = arr[i];
  }
  currEnd++;
  arr[idx] = p;
}
void pop() { currEnd--; }
void erase(int idx) {
  for (int i = idx; i < currEnd; i++) {
    arr[i] = arr[i + 1];
  }
  currEnd--;
}
void printArray() {
  printf("\n");
  for (int i = 0; i < currEnd; i++) {
    printf("Index: %3d Value: %s\n", i, arr[i]);
  }
}

char *get(int idx) { return arr[idx]; }

int getLength() { return currEnd; }

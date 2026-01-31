#include "./array.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  dynamicArray *arr;
  arrayInit(&arr);

  pushItem(arr, 9);
  pushItem(arr, 10);
  pushItem(arr, 3);

  pushItem(arr, 55);
  pushItem(arr, 0);

  printArray(arr);

  deleteItem(arr, 2);

  printArray(arr);

  popItem(arr);
  pushItem(arr, 55);
  printArray(arr);

  insertItem(arr, 1, 99);
  printArray(arr);

  freeArray(arr);
  return 0;
}

void arrayInit(dynamicArray **arr_ptr) {

  dynamicArray *container;
  container = (dynamicArray *)malloc(sizeof(dynamicArray));
  if (!container) {
    printf("Memory Allocation Failed!\n");
    exit(0);
  }

  container->size = 0;
  container->capacity = INITIAL_SIZE;
  container->array = (int *)malloc(0 * sizeof(int));

  if (!container->array) {
    printf("Memory Allocation Failed\n");
    exit(0);
  }

  *arr_ptr = container;
}

void freeArray(dynamicArray *arr) {
  free(arr->array);
  free(arr);
}

void pushItem(dynamicArray *arr, int item) {
  if (isArrayFull(arr)) {
    resizeArray(arr);
  }
  arr->array[arr->size++] = item;
}

void insertItem(dynamicArray *arr, int insertIdx, int value) {
  if (isArrayFull(arr)) {
    resizeArray(arr);
  }

  arr->size++;
  for (int i = arr->size; i >= insertIdx; i--) {
    arr->array[i + 1] = arr->array[i];
  }

  arr->array[insertIdx] = value;
}

void popItem(dynamicArray *arr) {
  if (arr->size > 0) {
    arr->size--;
  }
}

void deleteItem(dynamicArray *arr, int delIdx) {
  for (int i = delIdx; i < arr->size; i++) {
    arr->array[i] = arr->array[i + 1];
  }
  arr->size--;
}

int isArrayFull(dynamicArray *arr) { return arr->size == arr->capacity; }

void resizeArray(dynamicArray *arr) {
  int *temp = arr->array;
  arr->capacity <<= 1;
  arr->array = realloc(arr->array, arr->capacity * sizeof(int));
  if (!arr->array) {
    printf("OUT OF MEMEORY\n");
    arr->array = temp;
    return;
  }
}

void printArray(dynamicArray *arr) {
  for (int i = 0; i < arr->size; i++) {
    printf("Index: %3d\tValue: %3d\n", i, arr->array[i]);
  }
}

void printCapacity(dynamicArray *arr) {
  printf("Array Capacity: %zu\n", arr->capacity);
}

void printSize(dynamicArray *arr) { printf("Array Size: %zu\n", arr->size); }

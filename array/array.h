#include <stdlib.h>

#define INITIAL_SIZE 2

typedef struct {
  size_t size;
  size_t capacity;
  int *array;
} dynamicArray;

void arrayInit(dynamicArray **);
void freeArray(dynamicArray *);

void pushItem(dynamicArray *, int);
void insertItem(dynamicArray *, int, int);
void popItem(dynamicArray *);
void deleteItem(dynamicArray *, int);
void printArray(dynamicArray *);
void printCapacity(dynamicArray *);
void printSize(dynamicArray *);

int isArrayFull(dynamicArray *);
void resizeArray(dynamicArray *);

#include <stdlib.h>

typedef struct {
  size_t size;
  size_t capacity;
  int *array;
} dynamicArray;

void arrayInit(dynamicArray **);
void pushItem(dynamicArray *, int);
void popItem(dynamicArray *);
void deleteItem(dynamicArray *, int);
void printArray(dynamicArray *);
void printCapacity(dynamicArray *);
void printSize(dynamicArray *);

int isArrayFull(dynamicArray *);
void resizeArray(dynamicArray *);

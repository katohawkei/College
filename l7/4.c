#include <stdio.h>
#include <stdlib.h>

#include "../include/seed/seed.h"

#define MIN -100
#define MAX 100

void insertInArray(int pos, int num, int numOfElements, int *array);
int count(int numOfElements, int *array);

int main(int argc, char const *argv[]) {
  int numOfElements, *array;

  printf("Enter num of elements: ");
  scanf("%d", &numOfElements);

  array = (int *)calloc(numOfElements, sizeof(int));
  if (!array) {
    printf("Can't create.\n");
    exit(1);
  }

  fillArray(numOfElements, array, (int[]){MIN, MAX});
  printArray(numOfElements, array);

  int *newarray;
  if ((newarray =
           (int *)realloc(array, (numOfElements + count(numOfElements, array)) *
                                      sizeof(int))) == NULL) {
    free(array);
    array = NULL;
    return 0;
  }

  array = newarray;

  int sum = 0;
  for (int i = 0; i < numOfElements; i++) {
    sum += array[i];
    if (array[i] % 5 == 0) {
      numOfElements++;
      // FIXME: the problems with memory
      insertInArray(i + 1, sum, numOfElements, array);
      i++;  
    }
  }

  printf("\n");
  printArray(numOfElements, array);

  free(array);

  return 0;
}

void insertInArray(int pos, int num, int numOfElements, int *array) {
  for (int i = numOfElements; i > pos; i--) {
    array[i] = array[i - 1];
  }

  array[pos] = num;
}

int count(int numOfElements, int *array) {
  int count = 0;

  for (int i = 0; i < numOfElements; i++) {
    if (array[i] % 5 == 0) {
      count++;
    }
  }

  return count;
}
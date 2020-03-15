#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "array.h"

#define MIN 0
#define MAX 10

int how_many_diff_elem(int length_array, int *array);

int main(int argc, char *argv[]) {
  int length_array, *array;

  printf("Num of elements: ");
  scanf("%d", &length_array);

  srand(time(NULL));

  array = calloc(length_array, sizeof(int));
  if (array == NULL) {
    printf("Can't create\n");
    exit(1);
  }

  fillArray(length_array, array, (int[]){MIN, MAX});
  printArray(length_array, array);

  printf("diff = %d\n", how_many_diff_elem(length_array, array));

  free(array);

  return 0;
}

int how_many_diff_elem(int length_array, int *array) {
  int diff = 0;

  for (int i = 0; i < length_array; i++) {
    int j = 0;
    while (j < i && *(array + j) != *(array + i)) {
      j++;
    }
    diff += j == i;
  }

  return diff;
}

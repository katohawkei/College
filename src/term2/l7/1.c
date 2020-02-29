#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../../../include/seed/seed.h"

#define MIN 1
#define MAX 10

int min_elem(int length_array, int *array);
int even(int n);

int main(int argc, char *argv[]) {
  int length_array, *array;

  printf("Enter num of elements: ");
  scanf("%d", &length_array);

  srand(time(NULL));

  array = calloc(length_array, sizeof(int));
  if (array == NULL) {
    printf("Can't create\n");
    exit(1);
  }

  fillArray(length_array, array, (int[]){MIN, MAX});
  printArray(length_array, array);

  printf("\n%d\n", min_elem(length_array, array));

  free(array);

  return 0;
}

int min_elem(int length_array, int *array) {
  int min = array[0];

  for (int *p = array; length_array--; p++) {
    if (even(length_array)) {
      min = (*p < min) ? *p : min;
    }
  }

  return min;
}

int even(int n) { return n % 2 == 0; }
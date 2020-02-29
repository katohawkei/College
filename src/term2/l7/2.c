#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../../../include/seed/seed.h"

#define MIN -10
#define MAX 10

int abs_max_elem(int length_array, int *array);
int sum_btw_2_positive_nums(int length_array, int *array);
int positive(int n);

int main(int argc, char *argv[]) {
  int length_array, *array;

  printf("Num of elements: ");
  scanf("%d", &length_array);

  srand(time(NULL));

  array = (int *)malloc(length_array * sizeof(int));
  if (array == NULL) {
    printf("Can't create\n");
    exit(1);
  }

  fillArray(length_array, array, (int[]){MIN, MAX});
  printArray(length_array, array);

  printf("max = %d\n", abs_max_elem(length_array, array));
  printf("sum = %d\n", sum_btw_2_positive_nums(length_array, array));

  free(array);

  return 0;
}

int abs_max_elem(int length_array, int *array) {
  int max = array[0];

  for (int *p = array; length_array--; p++) {
    max = (abs(*p) > abs(max)) ? *p : max;
  }

  return max;
}

int sum_btw_2_positive_nums(int numOfElements, int *array) {
  int sum = 0;

  for (int i = 0; i < numOfElements; i++) {
    if (positive(*(array + i))) {
      i++;
      while (positive(*(array + i)) == 0) {
        sum += *(array + i);
        i++;
      }
      break;
    }
  }

  return sum;
}

int positive(int n) { return n > 0; }
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// my lib od funcs
// for work with array
// Like fill and print
#include "../../../include/seed/seed.h"

// Random range for fill
#define MIN 1
#define MAX 10

// min elem for even position
int min_elem(int length_array, int *array);

// is it even?
int even(int n) { return n % 2 == 0 };

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

  // My funcs for generate element and print
  fillArray(length_array, array, (int[]){MIN, MAX});
  printArray(length_array, array);

  printf("\n%d\n", min_elem(length_array, array));

  free(array);

  return 0;
}

int min_elem(int length_array, int *array) {
  int min = array[0];

  // *p = array <=> *p = &array[0]
  // my pointer var can move everywhere
  // So I need the stoping move when array ends
  // Like length_array
  for (int *p = array; length_array--; p++) {
    if (even(length_array)) {
      // Here is just like 
      // min = (array[i] < min) ...
      // But I used pointer var, 
      // so It's not necessary for using index var
      min = (*p < min) ? *p : min;
    }
  }

  return min;
}

#include "array.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN -2
#define MAX 3

void insert(int pos, int num, int n, int *array) {
  for (int i = n - 1; i > pos; i--) {
    array[i] = array[i - 1];
  }

  array[pos] = num;
}

int count(int n, int *array) {
  int count = 0;

  for (int i = 0; i < n; i++) {
    if (array[i] < 0) {
      count++;
    }
  }

  return count;
}

int sumArray(int *array, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }

    return sum;
}

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);

    int *a;
    
    srand(time(NULL));

    a = createArray_i(n);
    if (!a) {
        exit(1);
    }
    fillArray_i(a, n, (const int []) {MIN, MAX});
    printArray_i(a, n);

    int *newarray;
    if ((newarray =
           (int *)realloc(a, (n + count(n, a)) *
                                     sizeof(int))) == NULL) {
        free(a);
        a = NULL;
        return 0;
    }

    a = newarray;

    int sum = sumArray(a, n);
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
        n++;
        insert(i, sum, n, a);
        i++;
        }
    }

    printArray_i(a, n);

    free(a);

    return 0;
}
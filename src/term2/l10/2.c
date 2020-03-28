#include "array.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN -10
#define MAX 10

int count(int *arr, const int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int n, m;

    printf("n = ");
    scanf("%d", &n);

    printf("m = ");
    scanf("%d", &m);

    int *a, *b;
    
    srand(time(NULL));

    a = createArray_i(n);
    if (!a) {
        exit(1);
    }
    fillArray_i(a, n, (const int []) {MIN, MAX});
    printArray_i(a, n);

    b = createArray_i(m);
    if (!b) {
        exit(1);
    }
    fillArray_i(b, m, (const int []) {MIN, MAX});
    printArray_i(b, m);

    printf("\n");

    int count_a = count(a, n);
    int count_b = count(b, m);
    (count_a > count_b) ? printArray_i(a, n) : printArray_i(b, m);


    free(a);
    free(b);

    return 0;
}
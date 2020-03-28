#include "array.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN -10.00
#define MAX 10.00


int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);

    double *a, *b, *c;
    
    srand(time(NULL));

    a = createArray_d(n);
    if (!a) {
        exit(1);
    }
    fillArray_d(a, n, (const double []) {MIN, MAX});
    printArray_d(a, n);

    b = createArray_d(n);
    if (!b) {
        exit(1);
    }
    fillArray_d(b, n, (const double []) {MIN, MAX});
    printArray_d(b, n);

    c = createArray_d(n);
    if (!c) {
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
        printf("%.2f\t", c[i]);
    }

    free(a);
    free(b);
    free(c);

    return 0;
}
#include "array.h"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MIN -10
#define MAX 10


int main() {
    int k;
    printf("k = ");
    scanf("%d", &k);

    double *a;
    double min, max, avg, norm;

    srand(time(NULL));

    a = createArray_d(k);
    if (!a) {
        exit(1);
    }
    fillArray_d(a, k, (const double []) {MIN, MAX});

    min = max = a[0];
    avg = norm = 0;
    for (int i = 0; i < k; i++) {
        if (min > a[i]) {
            min = a[i];
        }

        if (max < a[i]) {
            max = a[i];
        }

        avg += a[i];
        norm += fabs(a[i]);
    }

    avg /= k;

    double *b;
    b = createArray_d(k);
    if (!b) {
        exit(1);
    }

    for (int i = 0; i < k; i++) {
        b[i] = a[i] / norm;
    }

    printArray_d(a, k);
    printf("min = %f\t max = %f\t avg = %f\t norm = %f\n\n", min, max, avg, norm);
    printArray_d(b, k);

    free(a);
    free(b);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "matrix.h"
#include "array.h"

#ifdef  _WIN64
    #define PR_SIZET "I"
#elif defined __unix__
    #define PR_SIZET "z"
#endif // DEBUG

#define MIN -10
#define MAX 10

int main() {
    size_t n = 0;
    unsigned negativeCount, positiveCount;

    negativeCount = positiveCount = 0;

    printf("n = ");
    scanf("%" PR_SIZET "u", &n);

    int **A = createMatrix(n, n);
    if (A == NULL) {
        printf("Init memory error");
        exit(1);
    }

    fillMatrix(n, n, A, (const int []){MIN, MAX});
    printMatrix(n, n, A);


    freeMatrix(n, A);

    return 0;
}
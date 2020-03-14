#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "matrix.h"

#define MIN -10
#define MAX 10

int sumMatrix(size_t n, int **matrix);
void solution(size_t n);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("usage: 2 <n of matrix>\n");
        exit(1);
    }

    size_t n = atoi(argv[1]);
    solution(n);

    return 0;
}

void solution(size_t n)
{
    int **matrix = createMatrix(n);

    if (matrix == NULL)
    {
        printf("Can't create.\n");
        exit(1);
    }

    srand(time(NULL));

    fillMatrix(n, matrix, (const int []){MIN, MAX});
    printMatrix(n, matrix);

    printf("sum = %d\n", sumMatrix(n, matrix));

    freeMatrix(n, matrix);

    system("pause");
}

int sumMatrix(size_t n, int **matrix)
{
    int sum = 0;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            sum += matrix[i][j];
        }
    }

    return sum;
}
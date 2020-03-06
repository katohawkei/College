#include <stdio.h>
#include <stdlib.h>

#include "../../../include/matrix/matrix.h"

#define MIN -10
#define MAX 10

void delete(size_t n, int **matrix);
size_t index_min_el(size_t n, int **matrix);

void solution(size_t n);

int main() 
{
    size_t n;

    printf("n = ");
    scanf("%ld", &n);

    solution(n);

    return 0;
}

void solution(size_t n)
{
    int **matrix = createMatrix(n, n);

    fillMatrix(n, n, matrix, (int[]){MIN, MAX});
    printMatrix(n, n, matrix);

    delete(n, matrix);
    printMatrix(n - 1, n, matrix);

    freeMatrix(n - 1, matrix);
}

size_t index_min_el(size_t n, int **matrix)
{
    int min = matrix[0][0];
    size_t index = 0;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (min > matrix[i][j])
            {
                min = matrix[i][j];
                index = i;
            }
        }
    }

    return index;
}

void delete(size_t n, int **matrix)
{
    size_t pos = index_min_el(n, matrix);

    for (size_t j = 0; j < n; j++) {
        for (size_t i = pos; i < n - 1; i++)
        {
            matrix[i][j] = matrix[i + 1][j];
        }
    }

    free(matrix[n - 1]);
}
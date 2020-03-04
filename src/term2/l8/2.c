#include <stdio.h>
#include <stdlib.h>

#include "../../../include/matrix/matrix.h"

#define MIN -10
#define MAX 10

int min_el(size_t n, int **matrix);

int main() 
{
    size_t n;
    int **matrix;

    printf("n = ");
    scanf("%ld", &n);

    matrix = (int **) malloc(n * sizeof(int *));
    for (size_t i = 0; i < n; i++) 
    {
        matrix[i] = (int *) malloc(n * sizeof(int));
    }

    fillMatrix(n, matrix, (int[]){MIN, MAX});
    printMatrix(n, matrix);

    for (size_t i = 0; i < n; i++)
    {
        free(matrix[i]);
    }

    free(matrix);

    return 0;
}

int min_el(size_t n, int **matrix)
{
    int min = matrix[0][0], index = 0;

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
}
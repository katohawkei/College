#include <stdlib.h>
#include <stdio.h>

#include "matrix.h"

double _random(const double min, const double max) 
{
    return ((double) rand() / RAND_MAX) * (max - min + 1) + min;
}

int **createMatrix(size_t n, size_t m)
{
    int **matrix;
    
    if ((matrix = (int **) malloc(n * sizeof(int *))) == NULL)
    {
        return NULL;
    }

    for (size_t i = 0; i < n; i++) 
    {
        matrix[i] = (int *) calloc(m, sizeof(int));
        if (matrix[i] == NULL)
        {
            return NULL;
        }
    }

    return matrix;
}

void fillMatrix(size_t n, size_t m, int **matrix, const int range[2]) 
{
    for (size_t i = 0; i < n; i++) 
    {
        for (size_t j = 0; j < m; j++) 
        {
            matrix[i][j] = _random(range[0], range[1]);
        }
    }
}

void printMatrix(size_t n, size_t m, int **matrix)
{
    for (size_t i = 0; i < n; i++, printf("\n"))
    {
        for (size_t j = 0; j < m; j++)
        {
            printf("%6d ", matrix[i][j]);
        }
    }
    printf("\n");
}

void freeMatrix(size_t n, int **matrix)
{
    for (size_t i = 0; i < n; i++)
    {
        free(matrix[i]);
    }

    free(matrix);
}
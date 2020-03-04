#include <stdlib.h>
#include <stdio.h>

#include "matrix.h"

double _random(const double min, const double max) 
{
    return ((double) rand() / RAND_MAX) * (max - min + 1) + min;
}

void fillMatrix(size_t n, int **matrix, const int range[]) 
{
    for (size_t i = 0; i < n; i++) 
    {
        for (size_t j = 0; j < n; j++) 
        {
            matrix[i][j] = _random(range[0], range[1]);
        }
    }
}

void printMatrix(size_t n, int **matrix)
{
    for (size_t i = 0; i < n; i++, printf("\n"))
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("%6d ", matrix[i][j]);
        }
    }
}
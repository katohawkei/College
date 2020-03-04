#include <stdio.h>
#include <stdlib.h>

#include "../../../include/matrix/matrix.h"

#define MIN -10
#define MAX 10

int sumDiagonal(size_t n, int **matrix);
void changeMatrix(size_t n, int **matrix);

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
    printf("\n");
    changeMatrix(n, matrix);
    printMatrix(n, matrix);

    for (size_t i = 0; i < n; i++)
    {
        free(matrix[i]);
    }

    free(matrix);

    return 0;
}

int sumDiagonal(size_t n, int **matrix) 
{
    int sum = 0;
    for (size_t i = 0; i < n; i++) 
    {
        sum += matrix[i][i];
    }
    
    return sum;
}

int even(int num)
{
    return num % 2 == 0;
}

void changeMatrix(size_t n, int **matrix)
{
    int sum = sumDiagonal(n, matrix);
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (even(matrix[i][j]))
            {
                matrix[i][j] = sum;
            }
        }
    }
}
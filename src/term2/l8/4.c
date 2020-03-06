#include <stdio.h>
#include <stdlib.h>

#include "../../../include/matrix/matrix.h"

#define MIN -10
#define MAX 10

int minDiagonalEl(size_t n, int **matrix);
int sumDiagonal(size_t n, int **matrix);

void solution(size_t n);

int main(int argc, char const *argv[])
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

    fillMatrix(n, n, matrix, (int []){MIN, MAX});
    printMatrix(n, n, matrix);
    
    printf("min = %d\n", minDiagonalEl(n, matrix));
    printf("sum = %d\n", sumDiagonal(n, matrix));

    freeMatrix(n, matrix);
}

int minDiagonalEl(size_t n, int **matrix)
{
    int min = matrix[0][1];
    
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            if (min > matrix[i][j])
            {
                min = matrix[i][j];
            }
        }
    }

    return min;
}

int sumDiagonal(size_t n, int **matrix)
{
    int sum = 0;

    for (size_t i = 0; i < n; i++)
    {
        sum += matrix[i][n - 1 - i];   
    }
    
    return sum;
}
#include <stdio.h>
#include <stdlib.h>

// #include "../../../include/matrix/matrix.h"
#include "matrix.h"

#define MIN -10
#define MAX 10

int even(int num) { return num % 2 == 0 };

int sumDiagonal(size_t n, int **matrix);
void changeMatrix(size_t n, int **matrix);

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
    int **matrix = createMatrix(n);

    fillMatrix(n, matrix, (int[]){MIN, MAX});
    printMatrix(n, matrix);

    changeMatrix(n, matrix);
    printMatrix(n, matrix);

    freeMatrix(n, matrix);
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
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "matrix.h"


#define MIN -10
#define MAX 10

typedef bool (*condition)(int);

bool negative(int num) { return num < 0; }
bool positive(int num) { return num > 0; }


size_t countZeros(size_t n, int **matrix);
int average(size_t n, int **matrix, condition cond);

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

    fillMatrix(n, n, matrix, (int []){MIN, MAX});
    printMatrix(n, n, matrix);

    printf("pos average = %d", average(n, matrix, positive));
    printf("\nneg average = %d", average(n, matrix, negative));
    printf("\nzeros = %ld\n", countZeros(n, matrix));
 
    freeMatrix(n, matrix);
}

size_t countZeros(size_t n, int **matrix) 
{
    size_t count = 0;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                count++;
            }
        }
    }

    return count;
}

int average(size_t n, int **matrix, condition cond)
{
    int average = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (cond(*(matrix + i * n + j)))
            {
                average += matrix[i][j];
            }
        }
    }

    return average;
}
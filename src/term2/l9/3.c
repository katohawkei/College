#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "matrix.h"

#define MIN 1
#define MAX 9

int productMaxMin(size_t n, int **matrix);
void solution(size_t n);

int main()
{
    size_t n;

    printf("Enter n: ");
    scanf("%ld", &n);

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

    printf("sum = %d\n", productMaxMin(n, matrix));

    freeMatrix(n, matrix);

    system("pause");
}

int productMaxMin(size_t n, int **matrix)
{
    int min, max;
    min = max = matrix[0][0];

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (min > matrix[i][j]) min = matrix[i][j];
            if (max < matrix[i][j]) max = matrix[i][j];
        }
    }

    return min * max;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "matrix.h"
#include "seed.h"

#define MIN -10
#define MAX 10

void vector(size_t n, size_t m, int **matrix);
void solution(size_t n, size_t m);
int productVector(size_t n, size_t index, int **matrix);

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("usage: 4 <n of matrix> <m of matrix>\n");
        exit(1);
    }

    size_t n = atoi(argv[1]);
    size_t m = atoi(argv[2]);
    solution(n, m);

    return 0;
}

void solution(size_t n, size_t m)
{
    int **matrix = createMatrix(n, m);

    if (matrix == NULL)
    {
        printf("Can't create.\n");
        exit(1);
    }

    srand(time(NULL));

    fillMatrix(n, m, matrix, (const int []){MIN, MAX});
    printMatrix(n, m, matrix);

    vector(n, m, matrix);

    freeMatrix(n, matrix);

    system("pause");
}

void vector(size_t n, size_t m, int **matrix)
{
    int **storage = createMatrix(2, m);
    int *array;
    size_t i_storage = 0;
    size_t min_j, max_j;
    size_t len_array = 0;
    int min, max;

    for (size_t i = 0; i < n; i++)
    {
        min = max = matrix[i][0];
        min_j = max_j = 0;
        for (size_t j = 0; j < m; j++)
        {
            if (max < matrix[i][j])
            {
                max = matrix[i][j];
                max_j = j;
            }
            if (min > matrix[i][j])
            {
                min = matrix[i][j];
                min_j = j;
            }
        }
        storage[0][i_storage] = min_j;
        storage[1][i_storage++] = max_j;
    }


    for (size_t j = 0; j < m; j++)
    {
        if (storage[0][j] == storage[1][j])
        {
            len_array++;
        }
    }

    if (len_array == 0)
    {
        printf("Try again.\n");
        return;
    }
    
    array = calloc(len_array, sizeof(int));
    if (array == NULL) 
    {
        printf("Can't create array.\n");
        return;
    }

    size_t k = 0;
    for (size_t j = 0; j < m; j++)
    {
        if (storage[0][j] == storage[1][j])
        {
            array[k++] = productVector(n, j, matrix);
        }
    }

    free(storage);

    printArray(k, array);
    return;
}

int productVector(size_t n, size_t index, int **matrix)
{
    int product = 1;
    for (size_t i = 0; i < n; i++)
    {
        product *= matrix[i][index];
    }

    return product;
}
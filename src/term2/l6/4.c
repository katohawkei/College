#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../../../include/seed/seed.h"

#define MIN -10
#define MAX 10

int abs_max_elem(int length_array, int *array);
void print_indexes_max_elems(int length_array, int *array);

int main()
{
    int length_array, *array;

    srand(time(NULL));

    printf("Num of Elements: ");
    scanf("%d", &length_array);
    array = (int *)calloc(length_array, sizeof(int));
    if (array == NULL)
    {
        printf("Can't create\n");
        exit(1);
    }

    fillArray(length_array, array, (int[]){MIN, MAX});
    printArray(length_array, array);

    print_indexes_max_elems(length_array, array);

    return 0;
}

int abs_max_elem(int length_array, int *array)
{
    int max = abs(array[0]);
    for (int i = 0; i < length_array; i++)
    {
        if (abs(max) < array[i])
            max = abs(array[i]);
    }

    return max;
}

void print_indexes_max_elems(int length_array, int *array)
{
    int max = abs_max_elem(length_array, array);

    for (int i = 0; i < length_array; i++)
    {
        if (max == abs(array[i]))
        {
            printf("%d\t", i + 1);
        }
    }

    printf("\n");
}

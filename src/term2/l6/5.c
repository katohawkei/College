#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "array.h"

#define MIN -100
#define MAX 100

int max_negative_elem(int length_array, int *array);
void print_addresses_elems(int length_array, int *array);

int main()
{
    int length_array, *array;

    srand(time(NULL));

    printf("Num of Elements: ");
    scanf("%d", &length_array);

    array = calloc(length_array, sizeof(int));
    if (array == NULL)
    {
        printf("Can't create\n");
        exit(1);
    }

    fillArray_i(length_array, array, (int[]){MIN, MAX});
    printArray_i(length_array, array);

    print_addresses_elems(length_array, array);
    printf("%d\n", max_negative_elem(length_array, array));

    return 0;
}

int max_negative_elem(int length_array, int *array)
{
    int max = 0;

    for (int i = 0; i < length_array; i++)
    {
        if (array[i] < 0 && abs(max) < abs(array[i]))
            max = array[i];
    }

    return max;
}

void print_addresses_elems(int length_array, int *array)
{
    for (int *p = array; length_array--; p++)
    {
        printf("%p\t", p);
    }

    printf("\n");
}

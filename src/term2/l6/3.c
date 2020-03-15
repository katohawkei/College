#include <stdio.h>
#include <stdlib.h>

#include "array.h"

#define MIN -50
#define MAX 50

double average(int length_array, int *array);

int main()
{
    int length_array, *array;

    printf("Num of elements: ");
    scanf("%d", &length_array);

    array = (int *) calloc(length_array, sizeof(int));
    if (array == NULL)
    {
        printf("Can't create\n");
        exit(1);
    }

    fillArray(length_array, array, (int[]){MIN, MAX});
    printArray(length_array, array);
    printf("\n%lf\n", average(length_array, array));

    return 0;
}

double average(int length_array, int *array)
{
    double average = 0;

    for (int i = 0; i < length_array; i++)
    {
        average += array[i];
    }

    return average / length_array;
}

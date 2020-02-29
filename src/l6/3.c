/*  Author:     Ivan Tkachuk
    Name:       Get average of elements in an array
    Log:        Formatted 22.02.2020 18:17
*/

#include <stdio.h>
#include <stdlib.h>

#include "../include/seed/seed.h"

#define MIN -50
#define MAX 50

double getAverage(int numOfElements, int *array);

int main()
{
    int numOfElements, *array;

    printf("Num of elements: ");
    scanf("%d", &numOfElements);

    array = (int *)calloc(numOfElements, sizeof(int));
    if (!array)
    {
        printf("Can't create\n");
        exit(1);
    }

    fillArray(numOfElements, array, (int[]){MIN, MAX});
    printArray(numOfElements, array);
    printf("\n%lf\n", getAverage(numOfElements, array));

    return 0;
}

double getAverage(int numOfElements, int *array)
{
    double average = 0;

    for (int i = 0; i < numOfElements; i++)
    {
        average += array[i];
    }

    return average / numOfElements;
}

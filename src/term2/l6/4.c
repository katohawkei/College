/*  Author:     Ivan Tkachuk
    Name:       Print index of max elements in an array
    Log:        Formatted 22.02.2020 18:31
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../../../include/seed/seed.h"

#define MIN -10
#define MAX 10

int getAbsoluteMaxElement(int numOfElements, int *array);
void printIndexesMaxElements(int numOfElements, int *array);

int main()
{
    int numOfElements, *array;

    srand(time(NULL));

    printf("Num of Elements: ");
    scanf("%d", &numOfElements);
    array = (int *)calloc(numOfElements, sizeof(int));
    if (!array)
    {
        printf("Can't create\n");
        exit(1);
    }

    fillArray(numOfElements, array, (int[]){MIN, MAX});
    printArray(numOfElements, array);

    printIndexesMaxElements(numOfElements, array);

    return 0;
}

int getAbsoluteMaxElement(int numOfElements, int *array)
{
    int max = abs(array[0]);
    for (int i = 0; i < numOfElements; i++)
    {
        if (abs(max) < array[i])
            max = abs(array[i]);
    }

    return max;
}

void printIndexesMaxElements(int numOfElements, int *array)
{
    int max = getAbsoluteMaxElement(numOfElements, array);

    for (int i = 0; i < numOfElements; i++)
    {
        if (max == abs(array[i]))
        {
            printf("%d\t", i + 1);
        }
    }

    printf("\n");
}

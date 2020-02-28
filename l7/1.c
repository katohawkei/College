/*  Author: Ivan Tkachuk
    Name: Get min element in array
    Date: 28.02.2020 16:53
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../include/seed/seed.h"

#define MIN 1
#define MAX 10

int getMinElement(int numOfElements, int *array);

int main(int argc, char *argv[])
{
    int numOfElements;
    int *array;

    printf("Enter num of elements: ");
    scanf("%d", &numOfElements);

    srand(time(NULL));

    array = calloc(numOfElements, sizeof(int));
    if (!array)
    {
        printf("Can't create\n");
        exit(1);
    }

    fillArray(numOfElements, array, (int []){MIN, MAX});
    printArray(numOfElements, array);

    printf("\n%d\n", getMinElement(numOfElements, array));

    free(array);
    
    return 0;
}

int getMinElement(int numOfElements, int *array)
{
    int min = array[0];

    for (int *p = array; numOfElements--; p++)
    {
        if (numOfElements % 2 == 0)
        {
            min = (*p < min) ? *p : min;
        }
    }

    return min;
}

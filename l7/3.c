/*  Author: Ivan Tkachuk
    Name: Get count of diffrent element in an array
    Date: 28.02.2020 16:55
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../include/seed/seed.h"

#define MIN 0
#define MAX 10

int diffelem(int num, int *array);

int main(int argc, char *argv[])
{
    int numOfElements, *array;

    printf("Num of elements: ");
    scanf("%d", &numOfElements);

    srand(time(NULL));

    array = calloc(numOfElements, sizeof(int));
    if (!array)
    {
        printf("Can't create\n");
        exit(1);
    }

    fillArray(numOfElements, array, (int[]){MIN, MAX});
    printArray(numOfElements, array);

    printf("diff = %d\n", diffelem(numOfElements, array));

    free(array);

    return 0;
}

int diffelem(int num, int *array)
{
    int diff = 0;

    for (int i = 0; i < num; i++)
    {
        int j = 0;
        while (j < i && *(array + j) != *(array + i))
        {
            j++;
        }   
        diff += j == i;
    }

    return diff;
}

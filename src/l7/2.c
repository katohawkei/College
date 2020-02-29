/*  Author: Ivan Tkachuk
    Name: Get max absolute element in array
        And get sum between two positive numbers
    Date: 28.02.2020 16:54
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../include/seed/seed.h"

#define MIN -10
#define MAX 10

int getMaxAbsoluteElement(int numOfElements, int *array);
int getSumModificied(int numOfElements, int *array);


int main(int argc, char *argv[])
{
    int numOfElements, *array;

    printf("Num of elements: ");
    scanf("%d", &numOfElements);

    srand(time(NULL));

    array = (int *)malloc(numOfElements * sizeof(int));
    if (!array)
    {
        printf("Can't create\n");
        exit(1);
    }

    fillArray(numOfElements, array, (int[]){MIN, MAX});
    printArray(numOfElements, array);

    printf("max = %d\n", getMaxAbsoluteElement(numOfElements, array));
    printf("sum = %d\n", getSumModificied(numOfElements, array));

    free(array);
    
    return 0;
}

int getMaxAbsoluteElement(int numOfElements, int *array)
{
    int max = array[0];

    for (int *p = array; numOfElements--; p++)
    {
        max = (abs(*p) > abs(max)) ? *p : max;
    }

    return max;
}

int getSumModificied(int numOfElements, int *array)
{
    int sum = 0;

    for (int i = 0; i < numOfElements; i++)
    {
        if (*(array + i) > 0)
        {
            i++;
            while(!(*(array + i) > 0))
            {
                sum += *(array + i);
                i++;
            }
            break;
        }
    }

    return sum;
}

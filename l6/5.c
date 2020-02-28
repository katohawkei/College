/*  Author:     Ivan Tkachuk
    Name:       Find max negative element
                and print elements' address in an array
    Log:        Changed 22.02.2020 19:18
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../include/seed/seed.h"

#define MIN -100
#define MAX 100

int maxNegativeElement(int numOfElements, int *array);
void printAddressesOfElements(int numOfElements, int *array);

int main()
{
    int numOfElements, *array;

    srand(time(NULL));

    printf("Num of Elements: ");
    scanf("%d", &numOfElements);

    array = calloc(numOfElements, sizeof(int));
    if (!array)
    {
        printf("Can't create\n");
        exit(1);
    }

    fillArray(numOfElements, array, (int[]){MIN, MAX});
    printArray(numOfElements, array);

    printAddressesOfElements(numOfElements, array);
    printf("%d\n", maxNegativeElement(numOfElements, array));

    return 0;
}

int maxNegativeElement(int numOfElements, int *array)
{
    int max = 0;

    for (int i = 0; i < numOfElements; i++)
    {
        if (array[i] < 0 && abs(max) < abs(array[i]))
            max = array[i];
    }

    return max;
}

void printAddressesOfElements(int numOfElements, int *array)
{
    for (int *p = array; numOfElements--; p++)
    {
        printf("%p\t", p);
    }

    printf("\n");
}

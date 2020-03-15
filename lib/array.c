#include <stdlib.h>
#include <stdio.h>

#include "array.h"

// Return random num in range between min and max
double getRandomNum(const double min, const double max) {
    return ((double) rand() / RAND_MAX) * (max - min + 1) + min;
}

// Fill elements of array with values in range
void fillArray(int numOfElements, int *array, const int range[]) {
    for (int i = 0; i < numOfElements; i++) {
		array[i] = getRandomNum(range[0], range[1]);
	}
}

// Print elements of array
void printArray(int numOfElements, int *array) {
    for (int i = 0; i < numOfElements; i++)
		printf("%6d ", array[i]);
	
	printf("\n");
}
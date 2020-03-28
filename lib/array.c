#include <stdlib.h>
#include <stdio.h>

#include "array.h"

// Return random num in range between min and max
double getRandomNum(const double min, const double max) {
    return ((double) rand() / RAND_MAX) * (max - min + 1) + min;
}

int *createArray_i(int n) {
	int *arr = (int *) malloc(n * sizeof(int));
	return arr;
}

// Fill elements of array with values in range
void fillArray_i(int *array, int numOfElements, const int range[]) {
    for (int i = 0; i < numOfElements; i++) {
		array[i] = getRandomNum(range[0], range[1]);
	}
}

// Print elements of array
void printArray_i(int *array, int numOfElements) {
    for (int i = 0; i < numOfElements; i++)
		printf("%6d ", array[i]);
	
	printf("\n");
}

double *createArray_d(const int n) {
   double *arr = (double *) calloc(n, sizeof(double));
   return arr; 
}

void fillArray_d(double *array, const int n, double const range[2]) {
    for (int i = 0; i < n; i++) {
        array[i] = getRandomNum(array[0], array[1]);
    }
}

void printArray_d(double *array, const int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2f\t", array[i]);
    }

    printf("\n");
}
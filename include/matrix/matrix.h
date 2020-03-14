#include <stddef.h>

double _random(const double min, const double max);

int **createMatrix(size_t n);

void fillMatrix(size_t n, int **matrix, const int range[]);

void printMatrix(size_t n, int **matrix);

void freeMatrix(size_t n, int **matrix);
#include <stddef.h>

double _random(const double min, const double max);

int **createMatrix(size_t n, size_t m);

void fillMatrix(size_t n, size_t m, int **matrix, const int range[]);

void printMatrix(size_t n, size_t m, int **matrix);

void freeMatrix(size_t n, int **matrix);
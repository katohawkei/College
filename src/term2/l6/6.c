#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 5;
    char c = 'a';
    float f = 3.1;
    double d = 7.2341;

    printf("%d\t%c\t%f\t%lf\n", i, c, f, d);

    int *pi = &i, **pa;
    char *pc = NULL;
    float *pf = &f;
    double *pd;

    pc = &c;

    int n = i;
    int *arr = malloc(sizeof(int) * n);
    double *fd = malloc(sizeof(double));

    pa = &arr;
    pd = fd;

    printf("%p\t%p\t%p\t%p\n%p\t%p\n", pi, pc, pf, pd, arr, fd);

    *pi = 3;
    pc = &c;
    *pc = 'A';
    *pf = 3.14;
    pd = &d;
    *pd = 3.21;

    printf("%d\t%c\t%f\t%lf\n", i, c, f, d);
    printf("%p\t%p\t%p\t%p\n", pi, pc, pf, pd);
    printf("%p\t%p\n%p\t%p\n", arr, fd, pa, pd);

    return 0;
}

#include <stdio.h>

void swap(int *p, int *q);

int main()
{
    int x = 12, y = 43;
    swap(&x, &y); // pass the address of the vars
    printf("x=%d, y=%d\n", x, y);

    return 0;
}

void swap(int *p, int *q)
{
    int t = *p; // temporary var
    *p = *q;    
    *q = t;
}

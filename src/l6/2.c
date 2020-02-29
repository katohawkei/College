#include <stdio.h>

int *func(void)
{
    static int x = 0;
    return &x;
}

int main(void)
{
    int *p;
    p = func();
    *p = 1;

    return 0;
}

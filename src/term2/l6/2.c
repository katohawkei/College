#include <stdio.h>
#include <stdlib.h>

int *func(void) // func returns memory address of var x
{
    static int x = 0; // without static keywords is caused a segmentation fault 
    return &x;
}

int main(void)
{
    int *p;
    p = func();
    *p = 1; // change value of x using pointer
    return 0;
}

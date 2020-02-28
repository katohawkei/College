#include <stdio.h>
#include <stdlib.h>

int main() {
  double zero = 0.0, pi = 3.141593, Euler = 2.718282;

  double *ptr1 = &zero;
  double *ptr2 = &pi;
  double *ptr3 = &Euler;

  printf("%p\t%p\t%p\n", ptr1, ptr2, ptr3);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
  double  zero = 0.0, pi = 3.141593, Euler = 2.718282;
  double *p = &zero;
  
  printf("%lf\n", *p++);
  printf("%lf\n", *p++);
  printf("%lf\n", *p);
  
  return 0;
}
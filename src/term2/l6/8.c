#include <stdio.h>
#include <stdlib.h>

int main() {
  // init vars
  double zero = 0.0, pi = 3.141593, Euler = 2.718282;
  // init pointers
  double *p = &zero;

  printf("%lf\n", *p);

  p = p + (&pi - &zero);
  printf("%lf\n", *p);
  p = p + (&Euler - &pi);
  printf("%lf\n", *p);
  
  return 0;
}
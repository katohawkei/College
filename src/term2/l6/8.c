#include <stdio.h>
#include <stdlib.h>

int main() {
  // init vars
  double zero = 0.0, pi = 3.141593, Euler = 2.718282;
  // init pointers
  double *p_zero = &zero;
  double *p_pi = &pi;
  double *p_euler = &Euler;

  zero++;
  pi++;
  Euler++;

  printf("%lf\t%lf\t%lf\n", *p_zero, *p_pi, *p_euler);

  return 0;
}
#include <stdio.h>
#include "libmodule03.h"

int main()
{
  double x = 1.5;
  double y = 3.0;  
  printf("%lf + %lf = %lf", x, y, calc(x, y));
  return 0;
}
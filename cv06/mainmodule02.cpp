#include <stdio.h>

double calc(double x, double y);

int main()
{
  double x = 1.5;
  double y = 3.0;  
  printf("%lf + %lf = %lf", x, y, calc(x, y));
  return 0;
}
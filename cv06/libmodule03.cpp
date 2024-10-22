#include <ctype.h>
#include "libmodule03.h"

int count_digits(const char* text)
{
  int count = 0;
  while (*text)
  {
    if (isdigit(*text))
    {
      count++;
    }
    text++;
  }

  return count;
}
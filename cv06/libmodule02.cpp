#include <ctype.h>
#include "libmodule03.h"

int count_letters(const char* text)
{
  int count = 0;
  while (*text)
  {
    if (isalpha(*text))
    {
      count++;
    }
    text++;
  }

  return count;
}
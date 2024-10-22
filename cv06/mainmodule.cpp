#include <stdio.h>
#include "libmodule02.cpp"
#include "libmodule03.cpp"
#include "libmodule03.h"

#define MAX_WORDS 100

int DelkySlov(char *text, int *delky)
{
  int word_length = 0, word_count = 0;

  for (int i = 0; text[i] != '\0'; i++)
  {
    if (isalpha(text[i]))
    {
      word_length++;
    }
    else
    {
      if (word_length > 0)
      {
        delky[word_count++] = word_length;
        word_length = 0;
      }
    }
  }

  if (word_length > 0 && word_count < MAX_WORDS)
  {
    delky[word_count++] = word_length;
  }

  return word_count;
}
int main()
{

  char text[] = "Toto jsou 2 vzorove vety, ktere budou zpracovavany Vasemi funkcemi. Auto Hyundai ix35 ma pres 120 konskych sil.";

  int letter_count = count_letters(text);
  int digit_count = count_digits(text);
  int delky[MAX_WORDS] = {};

  int word_count = DelkySlov(text, delky);

  printf("Počet písmen: %d\n", letter_count);
  printf("Počet číslic: %d\n", digit_count);
  printf("Počet slov: %d\n", word_count);
  printf("Délky slov: ");
  for (int i = 0; i < word_count; i++)
  {
    printf("%d, ", delky[i]);
  }

  printf("\n");
  return 0;
}
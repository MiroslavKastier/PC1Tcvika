#include "funkcie.h"
#include <cstdio>
#include <cctype>

int letterCount(const char* filePath) 
{
    FILE* file = fopen(filePath, "r");

    int letterCount = 0;
    int ch;

    while ((ch = fgetc(file)) != EOF) 
    {
        if (isalpha(ch)) 
        {
            ++letterCount;
        }
    }

    fclose(file);
    return letterCount;
}

int digitCount(const char* filePath) 
{
    FILE* file = fopen(filePath, "r");

    int digitCount = 0;
    int ch;

    while ((ch = fgetc(file)) != EOF) 
    {
        if (isdigit(ch)) 
        {
            ++digitCount;
        }
    }

    fclose(file);
    return digitCount;
}

void wordLengths(const char* inputFilePath, const char* outputFilePath) 
{
    FILE* inputFile = fopen(inputFilePath, "r");

    FILE* outputFile = fopen(outputFilePath, "a");

    int wordLength = 0;
    int ch;
    bool firstWord = true;

    printf("Délky slov: ");
    fprintf(outputFile, "Délky slov: ");

    while ((ch = fgetc(inputFile)) != EOF) 
    {
        if (isalpha(ch)) 
        {
            wordLength++;
        } 
        else if (wordLength > 0) 
        {
            if (!firstWord) 
            {
                printf(",");
                fprintf(outputFile, ",");
            }
            printf("%d", wordLength);
            fprintf(outputFile, "%d", wordLength);
            wordLength = 0;
            firstWord = false;
        }
    }

    if (wordLength > 0) 
    {
        if (!firstWord) 
        {
            printf(",");
            fprintf(outputFile, ",");
        }
        printf("%d", wordLength);
        fprintf(outputFile, "%d", wordLength);
    }

    printf("\n");
    fprintf(outputFile, "\n");

    fclose(inputFile);
    fclose(outputFile);
}
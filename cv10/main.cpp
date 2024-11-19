#include <cstdio>
#include "funkcie.h"
#include "funkcie.cpp"

int main() {
    const char* inputFilePath = "D:\\vstup.txt";
    const char* outputFilePath = "D:\\vysledky.txt";

    FILE* file = fopen(inputFilePath, "r");
    if (file == nullptr) 
    {
        printf("Nepodařilo se otevřít soubor %s\n", inputFilePath);
        return 0;
    }

    int letters = letterCount(inputFilePath);
    int digits = digitCount(inputFilePath);
    
    printf("Počet písmen: %d\n", letters);
    printf("Počet číslic: %d\n", digits);
    
    FILE* outputFile = fopen(outputFilePath, "w");
    if (outputFile != nullptr) 
    {
        fprintf(outputFile, "Počet písmen: %d\n", letters);
        fprintf(outputFile, "Počet číslic: %d\n", digits);
        
        fclose(outputFile);
        printf("Výsledky byly úspěšně uloženy do souboru %s\n", outputFilePath);
    } 
    else 
    {
        printf("Nepodařilo se otevřít soubor %s\n", outputFilePath);
        return 1;
    }

    wordLengths(inputFilePath, outputFilePath);

    return 0;
}

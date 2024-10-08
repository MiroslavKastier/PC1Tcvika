// FunExt.cpp : Defines the entry point for the application.
//

#include "PrestupnyRok.h"

using namespace std;

int jePrestupny(int rok)
{
    if((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int rok;
    int ans;

    do
    {
        printf("Zadajte rok: ");
        scanf("%d", &rok);

        int prestupnyRok = jePrestupny(rok);

        if (prestupnyRok == 1)
        {
            printf("\nRok %d je prestupný\n", rok);
        }
        else
        {
            printf("\nRok %d nie je prestupný\n", rok);
        }

        printf("\nAk chcete zadať ďalší rok, zadajte 1 (Ano) / 2 (Nie): ");
        scanf("%d", &ans);

    } while (ans == 1);
    
}

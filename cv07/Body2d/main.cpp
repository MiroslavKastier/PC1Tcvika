#include <stdio.h>
#include "Body2d.h"
#include "Body2d.cpp"

#define POCET_BODU 10

int main()
{
    int ans, x, y, kvadrant;

    int body[POCET_BODU][2] =
    {
        {5, 10},
        {-14, 2},
        {45, 4},
        {-9, 8},
        {58, -3},
        {47, 5},
        {-18, -86},
        {75, 7},
        {-25, 51},
        {17, 98}
    };

    do
    {
        printf("Zadajte súradnicu X referenčného bodu: ");
        scanf("%d", &x);
        printf("Zadajte súradnicu Y referenčného bodu: ");
        scanf("%d", &y);
        printf("Zadejte cislo kvadrantu (1-4): ");
        scanf("%d", &kvadrant);

        int nejblizsiIndex = indexNejblizsi(POCET_BODU, body, x, y);
        double priemernaVzdialenost = prumernaVzdalenost(POCET_BODU, body, x, y);

        printf("\nNejblizsi bod k [%d, %d] je [%d, %d]\n", x, y, body[nejblizsiIndex][0], body[nejblizsiIndex][1]);

        printf("\nPriemerná vzdialenosť bodu v poli k referenčnému bodu je %.2f\n", priemernaVzdialenost);

        bodyVKvadrantu(POCET_BODU, body, x, y, kvadrant);

        printf("\nChcete program opakovať? 1 (Ano) / 2 (Nie): ");
        scanf("%d", &ans);

    } while (ans == 1);

    return 0;
}

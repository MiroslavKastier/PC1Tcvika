#include "Body2d.h"
#include <math.h>

int indexNejblizsi(int velkost, int (*poleBodu)[2], int x, int y)
{
    int nejblizsiIndex = 0;
    double nejmensiVzdalenost = -1.0;

    for (int i = 0; i < velkost; i++)
    {
        int dx = poleBodu[i][0] - x;
        int dy = poleBodu[i][1] - y;

        double vzdalenost = sqrt(dx * dx + dy * dy);

        if (nejmensiVzdalenost < 0 || vzdalenost < nejmensiVzdalenost)
        {
            nejmensiVzdalenost = vzdalenost;
            nejblizsiIndex = i;
        }
    }
    return nejblizsiIndex;
}

double prumernaVzdalenost(int velkost, int (*poleBodu)[2], int x, int y)
{
    double celkovaVzdalenost = 0.0;

    for (int i = 0; i < velkost; i++)
    {
        int dx = poleBodu[i][0] - x;
        int dy = poleBodu[i][1] - y;
        celkovaVzdalenost += sqrt(dx * dx + dy * dy);
    }

    return celkovaVzdalenost / velkost;
}

void bodyVKvadrantu(int velikost, int (*poleBodu)[2], int x, int y, int kvadrant)
{
    printf("\nBody v kvadrante %d vzhľadom k referenčnému bodu [%d, %d]:\n", kvadrant, x, y);

    for (int i = 0; i < velikost; i++)
    {
        int x = poleBodu[i][0] - x;
        int y = poleBodu[i][1] - y;

        if ((kvadrant == 1 && x > 0 && y > 0) ||
            (kvadrant == 2 && x < 0 && y > 0) ||
            (kvadrant == 3 && x < 0 && y < 0) ||
            (kvadrant == 4 && x > 0 && y < 0))
        {
            printf("Bod [%d, %d]\n", poleBodu[i][0], poleBodu[i][1]);
        }
    }
}

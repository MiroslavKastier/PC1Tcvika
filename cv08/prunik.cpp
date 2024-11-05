// prunik.cpp : Defines the entry point for the application.

#include "kastier.h"

int prunik(double zacatek1, double konec1, double zacatek2, double konec2, double *vysl_zacatek, double *vysl_konec)
{
		*vysl_zacatek = (zacatek1 > zacatek2) ? zacatek1 : zacatek2;
		*vysl_konec = (konec1 < konec2) ? konec1 : konec2;

		if (*vysl_zacatek > *vysl_konec)
		{
			return 0;
		}
		else
		{
			return 1;
		}
}

int prunik2(double zacatek1, double konec1, double zacatek2, double konec2, double* vysl_zacatek, double* vysl_konec)
{
    if (zacatek1 > konec1) {
        double temp = zacatek1;
        zacatek1 = konec1;
        konec1 = temp;
    }

    if (zacatek2 > konec2) {
        double temp = zacatek2;
        zacatek2 = konec2;
        konec2 = temp;
    }

    *vysl_zacatek = (zacatek1 > zacatek2) ? zacatek1 : zacatek2;
    *vysl_konec = (konec1 < konec2) ? konec1 : konec2;

    if (*vysl_zacatek > *vysl_konec) 
	{
        return 0;
    }
    else 
	{
        return 1;
    }
}

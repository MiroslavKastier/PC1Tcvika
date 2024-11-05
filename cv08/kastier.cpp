// kastier.cpp : Defines the entry point for the application.

#include "kastier.h"
#include "prunik.cpp"

int main()
{
	double zacatek1, zacatek2, konec1, konec2, vysl_zacatek, vysl_konec;
	int ans, result, choice;

	do
	{
		printf("Zadajte počiatok intervalu 1: ");
		scanf("%lf", &zacatek1);
		printf("Zadejte koniec intervalu 1: ");
		scanf("%lf", &konec1);
		printf("Zadajte počiatok intervalu 2: ");
		scanf("%lf", &zacatek2);
		printf("Zadejte koniec intervalu 2: ");
		scanf("%lf", &konec2);

		printf("\nVyberte funkciu: 1 (Prunik1 - usporiadane intervaly) / 2 (Prunik2 - neusporiadane intervaly): ");
        scanf("%d", &choice);

        if (choice == 1) 
		{
            result = prunik(zacatek1, konec1, zacatek2, konec2, &vysl_zacatek, &vysl_konec);
        } 
		else 
		{
            result = prunik2(zacatek1, konec1, zacatek2, konec2, &vysl_zacatek, &vysl_konec);
        }

		if (result == 0)
		{
			printf("\nNemá prunik");
		}

		else if (result == 1)
		{
			if (vysl_zacatek > vysl_konec)
			{
				printf("\nPrunik: %.1lf, %.1lf\n", vysl_konec, vysl_zacatek);
			}

			else
			{
				printf("\nPrunik: %.1lf, %.1lf\n", vysl_zacatek, vysl_konec);
			}
		}
		printf("\nChcete program opakovať? 1 (Ano) / 2 (Nie): ");
		scanf("%d", &ans);

	} while (ans == 1);

	return 0;
}

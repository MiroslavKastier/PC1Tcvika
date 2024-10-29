// BublinkoveTrideni.cpp : Defines the entry point for the application.
//

#include "BublinkoveTrideni.h"
#include "Trideni.h"

void tiskInt(int velikost, int* pole)
{
	int i;
	for (i = 0; i < velikost; i++)
	{
		printf("%d\n", pole[i]);
	}
	printf("\n");
}

void tiskDouble(int velikost, double* pole)
{
	int i;
	for (i = 0; i < velikost; i++)
	{
		printf("%lf\n", pole[i]);
	}
	printf("\n");
}

void tiskRetezcu(int velikost, char(*pole)[MaxDelkaRetezce])
{
	int i;
	for (i = 0; i < velikost; i++)
	{
		printf("%s\n", pole[i]);
	}
	printf("\n");
}

int main()
{
	int poleInt[] = { 5, 4, 1, 2, 6 };
	int velikostPoleInt = sizeof(poleInt) / sizeof(int);

	double poleDouble[] = { 5.5, -4.2, 7.1, -42.2, 61.3, 7.2, 1.1 };
	int velikostPoleDouble = sizeof(poleDouble) / sizeof(double);

	char poleRetezcu[][MaxDelkaRetezce] = { "Beta", "Delta", "Gamma", "Alfa", "Epsilon" };
	int velikostPoleRetezcu = sizeof(poleRetezcu) / MaxDelkaRetezce;


	tiskInt(velikostPoleInt, poleInt);
	setridInt(velikostPoleInt, poleInt);
	tiskInt(velikostPoleInt, poleInt);

	tiskDouble(velikostPoleDouble, poleDouble);
	setridDouble(velikostPoleDouble, poleDouble);
	tiskDouble(velikostPoleDouble, poleDouble);

	tiskRetezcu(velikostPoleRetezcu, poleRetezcu);
	setridRetezce(velikostPoleRetezcu, poleRetezcu);
	tiskRetezcu(velikostPoleRetezcu, poleRetezcu);

	getchar();
	return 0;
}


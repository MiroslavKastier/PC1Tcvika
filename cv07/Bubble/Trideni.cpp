#include "Trideni.h"
#include <string.h>

void setridInt(int velikost, int* pole)
{
	int pruchod;
	int prohozeni;
	int index1, index2;
	int temp;
	int dosloKProhozeni;
	for (pruchod = 1; pruchod < velikost; pruchod++)
	{
		dosloKProhozeni = 0;
		for (prohozeni = 1; prohozeni <= velikost - pruchod; prohozeni++)
		{
			index1 = prohozeni - 1;
			index2 = prohozeni;
			if (pole[index1] > pole[index2])
			{
				dosloKProhozeni = 1;
				temp = pole[index1];
				pole[index1] = pole[index2];
				pole[index2] = temp;
			}
		}
		if (!dosloKProhozeni)
		{
			return;
		}
	}
}


void setridDouble(int velikost, double* pole)
{
	int pruchod;
	int prohozeni;
	int index1, index2;
	double temp;
	int dosloKProhozeni;
	for (pruchod = 1; pruchod < velikost; pruchod++)
	{
		dosloKProhozeni = 0;
		for (prohozeni = 1; prohozeni <= velikost - pruchod; prohozeni++)
		{
			index1 = prohozeni - 1;
			index2 = prohozeni;
			if (pole[index1] > pole[index2])
			{
				dosloKProhozeni = 1;
				temp = pole[index1];
				pole[index1] = pole[index2];
				pole[index2] = temp;
			}
		}
		if (!dosloKProhozeni)
		{
			return;
		}
	}
}

void setridRetezce(int velikost, char(*pole)[MaxDelkaRetezce])
{
	int pruchod;
	int prohozeni;
	int index1, index2;
	char temp[MaxDelkaRetezce];
	int dosloKProhozeni;
	for (pruchod = 1; pruchod < velikost; pruchod++)
	{
		dosloKProhozeni = 0;
		for (prohozeni = 1; prohozeni <= velikost - pruchod; prohozeni++)
		{
			index1 = prohozeni - 1;
			index2 = prohozeni;
			if (strcmp(pole[index1], pole[index2]) > 0)
			{
				dosloKProhozeni = 1;
				strcpy_s(temp, MaxDelkaRetezce, pole[index1]);
				strcpy_s(pole[index1], MaxDelkaRetezce, pole[index2]);
				strcpy_s(pole[index2], MaxDelkaRetezce, temp);
			}
		}
		if (!dosloKProhozeni)
		{
			return;
		}
	}
}
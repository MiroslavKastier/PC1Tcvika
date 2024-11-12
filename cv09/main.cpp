// main.cpp : Defines the entry point for the application.

#include "VectorMath.h"
#include "VectorMath.cpp"

using namespace std;

int main()
{
	struct vector3d u, v, w;
	enum typOperace op;
	enum typOsy osa;
	struct vector3d vec;

	int ans;
	do
	{
		printf("Zadajte vektor u (hodnoty x, y, z oddelené čiarkou): ");
		scanf("%lf,%lf,%lf", &u.x, &u.y, &u.z);

		printf("Zadajte vektor v (hodnoty x, y, z oddelené čiarkou): ");
		scanf("%lf,%lf,%lf", &v.x, &v.y, &v.z);

		printf("Zadajte operáciu (1 = súčet, 2 = vektorový súčin): ");
		scanf("%d", &op);

		if (op == 1 or op == 2)
		{
			tisk(operace(u, v, op));
		}

		else
		{
			printf("Neplatná operácia. Zadajte operáciu 1 alebo 2");
			return 0;
		}
		printf("\nZadajte vektor (hodnoty x, y, z oddelené čiarkou): ");
		scanf("%lf,%lf,%lf", &vec.x, &vec.y, &vec.z);

		printf("Zadajte osu rotace (1 = osaX, 2 = osaY, 3 = osaZ): ");
		scanf("%d", &osa);

		rotuj(&vec, osa);
		tisk(vec);

		printf("\nChcete program opakovať? 1 (Ano) / 2 (Nie): ");
		scanf("%d", &ans);

	} while (ans == 1);

	return 0;
}

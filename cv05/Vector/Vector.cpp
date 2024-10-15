// Vector.cpp : Defines the entry point for the application.

#include "Vector.h"
#include "vektorovySoucin.h"
#include "vektorovySoucin.cpp"
#include <stdio.h>
#include <math.h>

using namespace std;

void soucet(double a[3], double b[3], double c[3])
{
    for (int i = 0; i < 3; i++) 
    {
        c[i] = a[i] + b[i];
    }
}
double velikost(double a[3])
{
    double sum = 0;

    for (int i = 0; i < 3; i++) 
    {
        sum += a[i] * a[i];
    }
    return sqrt(sum);
}
double skalarniSoucin(double a[3], double b[3])
{
    double sum = 0;

    for (int i = 0; i < 3; i++) 
    {
        sum += a[i] * b[i];
    }
    return sum;
}
int main()
{
    double a[3], b[3], c[3];
    int ans;

    do
    {
        printf("Zadajte vektor A (3 hodnoty oddelené čiarkou): ");
        scanf("%lf,%lf,%lf", &a[0], &a[1], &a[2]);

        printf("Zadajte vektor B (3 hodnoty oddelené čiarkou): ");
        scanf("%lf,%lf,%lf", &b[0], &b[1], &b[2]);

        soucet(a, b, c);
        printf("\nSúčet vektorov A a B: (%.2f, %.2f, %.2f)\n", c[0], c[1], c[2]);

        double velkostA = velikost(a);
        double velkostB = velikost(b);

        printf("\nVeľkosť vektoru A je: %.2f\n", velkostA);
        printf("Veľkosť vektoru B je: %.2f\n", velkostB);

        double skalar = skalarniSoucin(a, b);
        printf("\nSkalárny súčin vektorov A a B je: %.2f\n", skalar);

        vektorovySoucin(a, b, c);
        printf("\nVektorový súčin vektorov A a B je: (%.2f, %.2f, %.2f)\n", c[0], c[1], c[2]);

        printf("\nChcete program pustiť znovu? 1 (Ano) / 2 (Nie): ");
        scanf("%d", &ans);

    } while (ans == 1);

    return 0;
}

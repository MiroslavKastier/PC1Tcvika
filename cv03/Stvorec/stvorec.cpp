// FunExt.cpp : Defines the entry point for the application.
//

#include "stvorec.h"

using namespace std;

int objem(int a)
{
    int ans = 4 * a;
    return ans;
}

int obsah(int a)
{
    int ans = a * a;
    return ans;
}
int main()
{
    int a;
    printf("Zadaj stranu A štvorca v cm: ");
    scanf("%d", &a);

    int obsahStvorca = obsah(a);
    int objemStvorca = objem(a);

    printf("Obsah štvorca je: %d cm^2\nObjem štvorca je: %d cm\n", obsahStvorca, objemStvorca);
    return 0;
}




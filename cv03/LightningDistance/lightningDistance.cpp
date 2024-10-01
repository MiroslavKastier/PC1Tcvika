// FunExt.cpp : Defines the entry point for the application.
//

#include "lightningDistance.h"

using namespace std;

int main()
{
    int time;
    printf("Enter a time in seconds from lighting to thhunder: ");
    scanf("%d", &time);

    int ans = 340 * time;

    printf("The distance of the lightning is: %d meters\n", ans);
    return 0;
}

// FunExt.cpp : Defines the entry point for the application.
//

#include "Prime.h"

using namespace std;

int isPrime(int num)
{
    if (num < 0 || num > 100)
    {
        return -1;
    }

    else if (num % 2 == 1)
    {
        return 1;
    }
    
    else
    {
        return 0;
    }
}
int main()
{
    int num;

    int ans;

    do
    {
        printf("Enter a number (0 - 100): ");
        scanf("%d", &num);

        int prime = isPrime(num);

        if (prime == -1)
        {
            printf("\nPlease enter a number in a range (0 - 100)\n");
        }

        else if (prime == 1)
        {
            printf("\nNumber %d is prime\n", num);
        }
        else
        {
            printf("\nNumber %d is not prime\n", num);
        }
        printf("\nDo you want to enter another number 1 (Yes) / 2 (No): ");
        scanf("%d", &ans);

    } while (ans == 1);
}

#include "Hudba.h"
#include "HudbaDB.cpp"
#include <stdio.h>

struct t_album* prvy = NULL;

void OnAdd() {
    char interpret[INTERPRET_SIZE];
    char nazov[NAZOV_SIZE];
    int rok;

    printf("\nInterpret: ");
    scanf("%99s", interpret);
    while (getchar() != '\n');

    printf("Názov albumu: ");
    scanf("%99s", nazov);
    while (getchar() != '\n');

    printf("Rok vydania: ");
    scanf("%d", &rok);
    while (getchar() != '\n');

    add(interpret, nazov, rok, &prvy);
}

void OnDel()
{
    char interpret[INTERPRET_SIZE];

    printf("\nInterpret: ");
    scanf("%99s", interpret);
    while (getchar() != '\n');

    del(interpret, &prvy);
}

void OnShow() 
{
    show(prvy);
}

void OnShowFiltered() 
{
    show_filtered(prvy);
}

int main() {
    int choice;
    do {
        printf("\nMenu:\n\n");
        printf("1. Pridať album\n");
        printf("2. Zobrazit všetky albumy\n");
        printf("3. Zobrazit albumy podľa interpreta\n"); // Nová volba
        printf("4. Odstranit album\n");
        printf("5. Ukončit\n");
        printf("\nZadajte číslo: ");
        scanf("%d", &choice);
        while (getchar() != '\n');

        switch (choice) {
            case 1:
                OnAdd();
                break;
            case 2:
                OnShow();
                break;
            case 3:
                OnShowFiltered(); // Nová funkce
                break;
            case 4:
                OnDel();
                break;
            case 5:
                break;
            default:
                printf("Neplatná volba.\n");
        }
    } while (choice != 5);

    return 0;
}


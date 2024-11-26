#include "Hudba.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"  
#define BLUE    "\033[34m" 

void add(const char* interpret, const char* nazov, int rok, struct t_album** prvy)
{
    struct t_album* novy = (struct t_album*)malloc(sizeof(struct t_album));
    strncpy(novy->interpret, interpret, INTERPRET_SIZE);
    strncpy(novy->nazov, nazov, NAZOV_SIZE);
    novy->rok = rok;
    novy->dalsi = NULL;

    if (*prvy == NULL || strcmp((*prvy)->interpret, interpret) > 0)
    {
        novy->dalsi = *prvy;
        *prvy = novy;
    } 
    else 
    {
        struct t_album* akt = *prvy;
        while (akt->dalsi != NULL && strcmp(akt->dalsi->interpret, interpret) < 0) {
            akt = akt->dalsi;
        }
        novy->dalsi = akt->dalsi;
        akt->dalsi = novy;
    }
}

void del(const char* interpret, struct t_album** prvy)
{
    struct t_album* akt = *prvy;
    struct t_album* pred = NULL;

    while (akt != NULL && strcmp(akt->interpret, interpret) != 0)
    {
        pred = akt;
        akt = akt->dalsi;
    }

    if (akt == NULL) 
    {
        printf("Album s interpretom %s nenájdený.\n", interpret);
        return;
    }

    if (pred == NULL) 
    {
        *prvy = akt->dalsi;
    } 
    else 
    {
        pred->dalsi = akt->dalsi;
    }

    free(akt);
}

void show(struct t_album* prvy)
{
    struct t_album* akt = prvy;
    
    if (akt == NULL)
    {
        printf(RED "\nV databáze sa nenachádza žiadny album :(\n" RESET"");
    }
    else
    {
        printf("\nVšetky albumy:\n\n");
    }
    
    while (akt != NULL)
    {
        printf("Interpret:" RED" %s" RESET", Album:" GREEN" %s" RESET", Rok:" BLUE" %d\n" RESET"", akt->interpret, akt->nazov, akt->rok);
        akt = akt->dalsi;
    }
}

void show_filtered(struct t_album* prvy) 
{
    char filter_char;

    printf("\nZadajte prvé písmeno interpreta: ");
    scanf(" %c", &filter_char);
    while (getchar() != '\n');

    filter_char = tolower(filter_char);

    struct t_album* akt = prvy;
    int nalezeno = 0;

    printf("\nAlbumy, ktorých interpret začína na: %c\n\n", filter_char);

    while (akt != NULL)
    {
        if (tolower(akt->interpret[0]) == filter_char)
        {
            printf("Interpret:" RED" %s" RESET", Album:" GREEN" %s" RESET", Rok:" BLUE" %d\n" RESET"", akt->interpret, akt->nazov, akt->rok);
            nalezeno = 1;
        }
        akt = akt->dalsi;
    }
    if (!nalezeno)
    {
        printf(RED "\nNebol nájdený žiadny interpret začínajúcí na: %c\n " RESET"", filter_char);
    }
}


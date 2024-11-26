#ifndef HUDBA_H
#define HUDBA_H

#define NAZOV_SIZE 100
#define INTERPRET_SIZE 100

struct t_album
{
    char interpret[INTERPRET_SIZE];
    char nazov[NAZOV_SIZE];
    int rok;
    struct t_album* dalsi;
};

void add(const char* interpret, const char* nazov, int rok, struct t_album** prvy);
void del(const char* interpret, struct t_album** prvy);
void show(struct t_album* prvy);
void show_filtered(struct t_album* prvy);
void sort_by_interpret(struct t_album** prvy);

#endif

// Body2d.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

// TODO: Reference additional headers your program requires here.

int indexNejblizsi(int velikost, int (*poleBodu)[2], int referencniX, int referencniY);
double prumernaVzdalenost(int velikost, int (*poleBodu)[2], int referencniX, int referencniY);
void bodyVKvadrantu(int velikost, int (*poleBodu)[2], int referencniX, int referencniY, int kvadrant);

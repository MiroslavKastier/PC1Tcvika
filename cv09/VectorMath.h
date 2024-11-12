#pragma once
#include <iostream>
enum typOperace { soucet = 1, skalarniSoucin, vektorovySoucin };
struct vector3d
{
	double x;
	double y;
	double z;
};
enum typOsy { osaX, osaY, osaZ };
struct vector3d operace(struct vector3d u, struct vector3d v, enum typOperace typ);

void tisk(struct vector3d u);

void rotuj(struct vector3d* vec, enum typOsy osa);

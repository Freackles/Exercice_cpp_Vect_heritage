#include "cPoint.h"

cPoint::cPoint(int x, int y)
{
	this->x = x;
	this->y = y;
}
cPoint::cPoint()
{
	this->x = 0;
	this->y = 0;
}
#include <iostream>
#include "cPoint.h"


void cPoint::affiche()
{
	std::cout << "Coordonnées : " << x << " " << y << "\n";
}

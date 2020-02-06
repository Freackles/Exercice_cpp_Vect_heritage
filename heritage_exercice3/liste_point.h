#pragma once
#include "cPoint.h"
#include "liste.h"

class liste_point : public liste, public cPoint
{
public:
	liste_point() {}
	void affiche();
};


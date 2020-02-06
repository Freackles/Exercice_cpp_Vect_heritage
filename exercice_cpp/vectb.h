#pragma once
#include "vect.h"

class vectb : public vect
{
private:
	int nD, nF;

public:
	vectb(int nD, int nF);
	int& operator [] (int nI);
};


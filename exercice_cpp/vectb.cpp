#include "vectb.h"

vectb::vectb(int nD, int nF)
{
	vect(nF - nD + 1); //constructeur de "vect"
	this->nD = nD;
	this->nF = nF;
}

int& vectb::operator[](int nI)
{
	return adr[nI - nD];
}

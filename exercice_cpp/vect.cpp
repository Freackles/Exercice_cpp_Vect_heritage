#include "vect.h"
#include <iostream>
#include <cstdlib>

vect::vect(int nI)
{
	this->nelem = nI;
	this->adr = (int*)malloc(nI+1);
}

vect::~vect()
{
	free(adr);
}

int& vect::operator[](int nI)
{
	return adr[nI];
}

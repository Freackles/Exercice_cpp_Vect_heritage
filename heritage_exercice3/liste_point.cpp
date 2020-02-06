#include "liste_point.h"

void liste_point::affiche()
{
	cPoint* ptr = (cPoint*)premier();  
	while (!fini()) 
	{
		ptr->affiche(); ptr = (cPoint*)prochain();
	}
}

#include "liste.h"
#include <stdlib.h>

liste::liste()
{
	debut = NULL;
	current = debut;
}

liste::~liste()
{
	element* suiv;  current = debut;  
	while (current != NULL)
	{
		suiv = current->suivant;
		delete current;
		current = suiv;
	}
}

void liste::ajoute(void* idk)
{
	element* eTemp = new element;
	eTemp->suivant = debut;  
	eTemp->contenu = idk;  
	debut = eTemp;
}

void* liste::premier()
{
	current = debut;
	if (current != NULL)
	{
		return (current->contenu);
	}
	else
	{
		return NULL;
	}
}

void* liste::prochain()
{
	if (current != NULL) 
	{ 
		current = current->suivant;
		if (current != NULL) 
			return (current->contenu); 
	}    
	return NULL;
}

int liste::fini()
{
	return (current == NULL);
}

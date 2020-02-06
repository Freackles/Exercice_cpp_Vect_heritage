#pragma once

struct element
{
	element* suivant;
	void* contenu;
};

class liste
{
protected:
	element* debut;
	element* current;

public:
	liste();
	~liste();

	void ajoute(void* idk);
	void* premier();
	void* prochain();
	int fini();
};


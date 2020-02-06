#pragma once
class vect
{
protected: 
	int nelem;        // nombre d'éléments   
	int * adr ;        // adresse zone dynamique contenant les éléments public :   
	
public:
	vect (int nI) ;       // constructeur (précise la taille du vecteur)   
	~vect () ;                 // destructeur   
	int & operator [] (int nI) ;  // accès à un élément par son "indice"
};


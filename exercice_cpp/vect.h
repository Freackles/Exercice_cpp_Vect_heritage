#pragma once
class vect
{
protected: 
	int nelem;        // nombre d'�l�ments   
	int * adr ;        // adresse zone dynamique contenant les �l�ments public :   
	
public:
	vect (int nI) ;       // constructeur (pr�cise la taille du vecteur)   
	~vect () ;                 // destructeur   
	int & operator [] (int nI) ;  // acc�s � un �l�ment par son "indice"
};


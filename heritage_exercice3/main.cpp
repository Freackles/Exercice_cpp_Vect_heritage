#include "liste_point.h"
#include <iostream>

int main() 
{ 
	liste_point lpTest;  
	cPoint pA(42, 420), pB(7, 69), pC(240, 911); 
	lpTest.ajoute(&pA); lpTest.affiche(); std::cout << "---------\n"; 
	lpTest.ajoute(&pB); lpTest.affiche(); std::cout << "---------\n"; 
	lpTest.ajoute(&pC); lpTest.affiche(); std::cout << "---------\n";

	return 0;
}
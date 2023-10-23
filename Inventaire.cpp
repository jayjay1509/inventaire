#include "Inventaire.h"

#include <iostream>


void Inventaire::push(Item& item)
{
	InventaireJoueur.push_back(&item);
}

void Inventaire::dispay()
{
	for (int i = 0; i < InventaireJoueur.size(); i++)
	{
		std::cout << "[" << i+1 << "]" <<InventaireJoueur[i]->tostring() <<"\n";
	}
}


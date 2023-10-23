#include "Potion.h"


void Potion::Use()
{
	std::cout << "La potion a une qualite de  " << QualitePotion << std::endl;
}

int Potion::getQualite() const
{
    return QualitePotion;
}


#include "Weapon.h"
void Weapon::Use()
{
	std::cout << "La potion a une qualite de  " << QualiteWeapon << std::endl;
}

int Weapon::getQualite() const
{
	return QualiteWeapon;
}

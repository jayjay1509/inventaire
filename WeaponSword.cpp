#include "WeaponSword.h"
void WeaponSword::Use()
{
	std::cout << "La sword a " << Att << "d'attack " << std::endl;
}

std::string WeaponSword::tostring()
{
	return (NameForItem + " la qualite: " + std::to_string(QualiteWeapon) + " le nombre de hp recupere est de  " + std::to_string(Att));
}
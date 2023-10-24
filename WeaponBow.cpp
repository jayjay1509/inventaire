#include "WeaponBow.h"
void WeaponBow::Use()
{
	std::cout << "Le Bow a " << Att << "d'attack " << std::endl;
}

std::string WeaponBow::tostring()
{
	return (NameForItem + " la qualite: " + std::to_string(QualiteWeapon) + " le nombre de hp recupere est de  " + std::to_string(Att));
}
#include "ForcePotion.h"
void ForcePotion::Use()
{
	std::cout << "La potion me donne " << Att << "attaque" << std::endl;
}

std::string ForcePotion::tostring()
{
	return (NameForItem + " la qualite: " + std::to_string(QualitePotion) + " le nombre de hp recupere est de  " + std::to_string(Att));
}
#include "HealthPotion.h"
void HealthPotion::Use()
{
	std::cout << "La potion me donne " << HP << "Hp" << std::endl;
}

std::string HealthPotion::tostring()
{
	return (NameForItem + " la qualite: " + std::to_string(QualitePotion) + " le nombre de hp recupere est de  " + std::to_string(HP));
}



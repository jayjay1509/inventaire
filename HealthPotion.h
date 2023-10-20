#pragma once
#include <iostream>

#include "Potion.h"
class HealthPotion : public Potion
{
	int HP;
public:
	HealthPotion(std::string NameForItem, int QualitePotion, int hp) : Potion(NameForItem, QualitePotion), HP(hp) {}

	void Use();
	std::string tostring();
	
};

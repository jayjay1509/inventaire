#pragma once
#include <iostream>

#include "Item.h"
#include "Weapon.h"

class WeaponSword : public Weapon
{
	int Att;
public:
	WeaponSword(std::string nameForItem, int qualiteWeapon, int att) : Weapon(nameForItem, qualiteWeapon), Att(att) {}
	void Use();
};


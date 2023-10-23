#pragma once
#include <iostream>

#include "Item.h"
#include "Weapon.h"

class WeaponSword : public Weapon
{
	int Att;
	int Type = 4;
public:
	WeaponSword(std::string nameForItem, int qualiteWeapon, int att) : Weapon(nameForItem, qualiteWeapon), Att(att) {}
	void Use();
	std::string tostring();

	int getValue() const
	{
		return Att;
	}

	int getType() const
	{
		return Type;
	}
};


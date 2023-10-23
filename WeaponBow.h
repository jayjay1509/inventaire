#pragma once
#include "Weapon.h"
class WeaponBow :
    public Weapon
{
	int Att;
	int Type = 3;
public:
	WeaponBow(std::string nameForItem, int qualiteWeapon, int att) : Weapon(nameForItem, qualiteWeapon), Att(att) {}
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
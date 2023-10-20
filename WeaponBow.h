#pragma once
#include "Weapon.h"
class WeaponBow :
    public Weapon
{
	int Att;
public:
	WeaponBow(std::string nameForItem, int qualiteWeapon, int att) : Weapon(nameForItem, qualiteWeapon), Att(att) {}
	void Use();
	
};
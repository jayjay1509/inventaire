#pragma once
#include <iostream>

#include "Item.h"
class Weapon :public Item
{
protected:
	int QualiteWeapon;
public:
	Weapon(std::string nameForItem, int qualiteWeapon) : Item(nameForItem), QualiteWeapon(qualiteWeapon) {}
	void Use();

	int getQualite() const override;
};


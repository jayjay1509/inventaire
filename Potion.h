#pragma once
#include <iostream>

#include "Item.h"
class Potion : public Item
{
protected:
	int QualitePotion;
public:
	Potion(std::string NameForItem, int QualitePotion) : Item(NameForItem), QualitePotion(QualitePotion) {}

	void Use();

	std::string qualiteString(int QualitePotion);

	int getQualitepotion() const override;


};
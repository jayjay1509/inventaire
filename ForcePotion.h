#pragma once
#include <iostream>

#include "Potion.h"
class ForcePotion : public Potion
{
	int Att;
	int Type = 2;
public:
	ForcePotion(std::string NameForItem, int QualitePotion,int att) : Potion(NameForItem,QualitePotion),Att(att){}

	void Use();

	int getAtt() const {
		return Att;
	}

	int getType() const {
		return Type;
	}

	std::string getNom() const {
		return NameForItem;
	}
};


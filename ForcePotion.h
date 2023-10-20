#pragma once
#include <iostream>

#include "Potion.h"
class ForcePotion : public Potion
{
	int Att;
public:
	ForcePotion(std::string NameForItem, int QualitePotion,int att) : Potion(NameForItem,QualitePotion),Att(att){}

	void Use();
};


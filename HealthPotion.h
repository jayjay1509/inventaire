#pragma once

#include "Potion.h"
class HealthPotion : public Potion
{
	int HP;
	int Type = 1;

public:
	HealthPotion(std::string NameForItem, int QualitePotion, int hp) : Potion(NameForItem, QualitePotion), HP(hp) {}

	void Use();
	std::string tostring();

    
    int getValue() const
	{
        return HP;
    }

	int getType() const
	{
		return Type;
	}


};


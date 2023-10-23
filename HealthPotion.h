#pragma once
#include <iostream>

#include "Potion.h"
class HealthPotion : public Potion
{
	int HP;
	int Type = 1;
public:
	HealthPotion(std::string NameForItem, int QualitePotion, int hp) : Potion(NameForItem, QualitePotion), HP(hp) {}

	void Use();
	std::string tostring();

    
    int gethp() const {
        return HP;
    }

	int getType() const {
		return Type;
	}



};


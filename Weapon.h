#pragma once

#include <iostream>
#include "Item.h"

class Weapon : public Item {
protected:
    int QualiteWeapon;  // Quality level of the weapon.

public:
    // Constructor for the Weapon class, taking the name and quality level as parameters and calling the base class (Item) constructor.
    Weapon(std::string nameForItem, int qualiteWeapon) : Item(nameForItem), QualiteWeapon(qualiteWeapon) {}

    // Method to use the weapon. This method can be called when the player uses the weapon.
    void Use();

    // Method to obtain the quality level of the weapon.
    int getQualite() const override;
};

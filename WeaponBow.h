#pragma once

#include "Weapon.h"

class WeaponBow : public Weapon {
    int Att;  // Attack value of the bow.
    int Type = 3;  // Type of the weapon (3 for bows).

public:
    // Constructor for the WeaponBow class, taking the name, quality level, and attack value as parameters and calling the base class (Weapon) constructor.
    WeaponBow(std::string nameForItem, int qualiteWeapon, int att) : Weapon(nameForItem, qualiteWeapon), Att(att) {}

    // Method to use the bow. This method can be called when the player uses the bow.
    void Use();

    // Method to obtain a textual representation of the bow (overrides the base class method).
    std::string tostring();

    // Method to obtain the attack value of the bow.
    int getValue() const {
        return Att;
    }

    // Method to obtain the type of the item (in this case, the type is 3 for bows).
    int getType() const {
        return Type;
    }
};

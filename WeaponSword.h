#pragma once

#include "Weapon.h"

class WeaponSword : public Weapon {
    int Att;  // Attack value of the sword.
    int Type = 4;  // Type of the weapon (4 for swords).

public:
    // Constructor for the WeaponSword class, taking the name, quality level, and attack value as parameters and calling the base class (Weapon) constructor.
    WeaponSword(std::string nameForItem, int qualiteWeapon, int att) : Weapon(nameForItem, qualiteWeapon), Att(att) {}

    // Method to use the sword. This method can be called when the player uses the sword.
    void Use();

    // Method to obtain a textual representation of the sword (overrides the base class method).
    std::string tostring();

    // Method to obtain the attack value of the sword.
    int getValue() const {
        return Att;
    }

    // Method to obtain the type of the item (in this case, the type is 4 for swords).
    int getType() const {
        return Type;
    }
};

#include "WeaponSword.h"

// Implementation of the 'Use' method for the sword weapon.
void WeaponSword::Use() {
    std::cout << "The sword has " << Att << " attack." << std::endl;
}

// Implementation of the 'tostring' method to represent the sword as a string.
std::string WeaponSword::tostring() {
    return (NameForItem + " quality: " + std::to_string(QualiteWeapon) + " and provides " + std::to_string(Att) + " attack points.");
}

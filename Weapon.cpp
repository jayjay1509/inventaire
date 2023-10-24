#include "Weapon.h"

// Implementation of the 'Use' method for weapons.
void Weapon::Use() {
    std::cout << "The weapon has a quality of " << QualiteWeapon << std::endl;
}

// Implementation of the 'getQualite' method to retrieve the quality of a weapon.
int Weapon::getQualite() const {
    return QualiteWeapon;
}

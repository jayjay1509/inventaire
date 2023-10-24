#include "Potion.h"

// Implementation of the 'Use' method for potions.
void Potion::Use() {
    std::cout << "The potion has a quality of " << QualitePotion << std::endl;
}

// Implementation of the 'getQualite' method to retrieve the quality of a potion.
int Potion::getQualite() const {
    return QualitePotion;
}

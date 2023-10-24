#include "ForcePotion.h"

// Method to use the force potion. This method displays the attack value provided by the potion.
void ForcePotion::Use() {
    std::cout << "The potion gives me " << Att << " attack" << std::endl;
}

// Method to obtain a textual representation of the force potion. It includes the name, quality, and attack value.
std::string ForcePotion::tostring() {
    return (NameForItem + " Quality: " + std::to_string(QualitePotion) + " Attack provided: " + std::to_string(Att));
}

#include "HealthPotion.h"

// Method to use the health potion. This method displays the amount of health points (HP) recovered by drinking the potion.
void HealthPotion::Use() {
    // Assuming you have a 'playerhealth' variable to represent the player's health.
    // playerhealth += HP;
    std::cout << "You have consumed the health potion and recovered " << HP << " hit points." << std::endl;
}

// Method to obtain a textual representation of the health potion. It includes the name, quality, and HP value.
std::string HealthPotion::tostring() {
    return (NameForItem + " Quality: " + std::to_string(QualitePotion) + " HP recovered: " + std::to_string(HP));
}

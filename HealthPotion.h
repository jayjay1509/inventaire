#include <string>

#include "Potion.h"

// The 'HealthPotion' class inherits from the 'Potion' class.
class HealthPotion : public Potion {
    int HP;     // Health points that this potion restores.
    int Type = 1;  // The type of the item (1 for health potions).

public:
    // Constructor for the 'HealthPotion' class, taking the name, quality, and health points as parameters.
    HealthPotion(std::string NameForItem, int QualitePotion, int hp) : Potion(NameForItem, QualitePotion), HP(hp) {}

    // Method to use the potion. This method can be called when a player drinks the potion.
    void Use();

    // Method to get a textual representation of the potion.
    std::string tostring();

    // Method to get the value of health points restored by the potion.
    int getValue() const {
        return HP;
    }

    // Method to get the type of the item (1 for health potions).
    int getType() const {
        return Type;
    }
};

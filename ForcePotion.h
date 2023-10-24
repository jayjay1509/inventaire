#include <string>

#include "Potion.h"

// The 'ForcePotion' class inherits from the 'Potion' class.
class ForcePotion : public Potion {
    int Att;    // The value of the strength increase provided by this potion.
    int Type = 2;  // The type of the item (2 for strength potions).

public:
    // Constructor for the 'ForcePotion' class, taking the name, quality, and strength increase value as parameters.
    ForcePotion(std::string NameForItem, int QualitePotion, int att) : Potion(NameForItem, QualitePotion), Att(att) {}

    // Method to use the potion. This method can be called when a player drinks the potion to increase their strength.
    void Use();

    // Method to get a textual representation of the potion.
    std::string tostring();

    // Method to get the value of the strength increase provided by the potion.
    int getValue() const {
        return Att;
    }

    // Method to get the type of the item (2 for strength potions).
    int getType() const {
        return Type;
    }
};

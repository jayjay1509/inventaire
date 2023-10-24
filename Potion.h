#pragma once

#include <iostream>
#include "Item.h"

class Potion : public Item {
protected:
    int QualitePotion;  // Quality level of the potion.

public:
    // Constructor for the Potion class, taking the name and quality level as parameters and calling the base class (Item) constructor.
    Potion(std::string NameForItem, int QualitePotion) : Item(NameForItem), QualitePotion(QualitePotion) {}

    // Method to use the potion. This method can be called when the player uses the potion.
    void Use();

    // Method to obtain a textual representation of the quality level of the potion.
    std::string qualiteString(int QualitePotion);

    // Method to obtain the quality level of the potion.
    int getQualite() const override;
};

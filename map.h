#pragma once

#include <iostream>
#include "Item.h"

class map : public Item {
public:
    // Constructor for the map class, taking the name of the item as a parameter and calling the base class (Item) constructor.
    map(std::string nameForItem) : Item(nameForItem) {}

    // Method to use the map. This method can be called when the player uses the map.
    void Use();

    // Method to obtain a textual representation of the map (overrides the base class method).
    std::string tostring() override {
        return NameForItem;
    }

    // Method to obtain the value of the map (in this case, the value is usually zero).
    int getValue() const override {
        return 0;
    }

    // Method to obtain the type of the item (in this case, the type is 5 for maps).
    int getType() const override {
        return 5;
    }

    // Method to obtain the quality of the map (in this case, the quality is usually zero).
    int getQualite() const override {
        return 0;
    }
};

#pragma once

#include <string>
#include <nlohmann/json.hpp>

// Enumeration to represent the quality of the item.
enum class Qualite {
    Common,
    Rare,
    Epic
};

class Item {
protected:
    std::string NameForItem;  // Name of the item.

public:
    // Constructor for the Item class, taking the name of the item as a parameter.
    Item(std::string NameForItem) : NameForItem(NameForItem) {};

    // Pure virtual method to use the item (must be implemented in subclasses).
    virtual void Use() = 0;

    // Pure virtual method to obtain a textual representation of the item (must be implemented in subclasses).
    virtual std::string tostring() = 0;

    // Pure virtual method to obtain the quality of the item (must be implemented in subclasses).
    virtual int getQualite() const = 0;

    // Pure virtual method to obtain the value of the item (must be implemented in subclasses).
    virtual int getValue() const = 0;

    // Pure virtual method to obtain the type of the item (must be implemented in subclasses).
    virtual int getType() const = 0;

    // Method to get the name of the item.
    std::string getNom() const {
        return NameForItem;
    }
};


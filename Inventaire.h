#pragma once

#include <map>
#include <vector>
#include "Item.h"

class Inventaire {
public:
    std::vector<Item*> InventaireJoueur;  // Vector of objects representing the player's inventory.

    // Method to add an item to the player's inventory.
    void push(Item* item);

    // Method to display the player's inventory.
    void dispay();

    // Method to remove an item from the inventory based on its index.
    void RemoveItem(int index);

    // Method to get a constant reference to the player's inventory.
    const std::vector<Item*>& getInventaire() const {
        return InventaireJoueur;
    }
};

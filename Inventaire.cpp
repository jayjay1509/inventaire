#include "Inventaire.h"
#include <iostream>
#include "HealthPotion.h"
#include "Potion.h"

// Method to add an item to the player's inventory.
void Inventaire::push(Item* item) {
    InventaireJoueur.push_back(item);
}

// Method to display the contents of the player's inventory.
void Inventaire::dispay() {
    std::cout << "-----------------------------------------------------------------------\n";
    for (int i = 0; i < InventaireJoueur.size(); i++) {
        std::cout << "[" << i + 1 << "]" << InventaireJoueur[i]->tostring() << "\n";
    }
    std::cout << "-----------------------------------------------------------------------\n";
}

// Method to remove an item from the player's inventory based on its index.
void Inventaire::RemoveItem(int index) {
    if (index >= 0 && index < InventaireJoueur.size()) {
        // Uncomment the following line if you have dynamically allocated memory for items:
        // delete InventaireJoueur[index];
        InventaireJoueur.erase(InventaireJoueur.begin() + index);
    }
    else {
        std::cout << "You're attempting to remove an item that doesn't exist. Be careful!" << std::endl;
    }
}

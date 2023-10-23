#pragma once
#include <map>
#include <vector>

#include "Item.h"

class Inventaire
{
public:
    std::vector<Item*> InventaireJoueur;

    void push(Item* item);

    void dispay();

    const std::vector<Item*>& getInventaire() const {
        return InventaireJoueur;
    }

};

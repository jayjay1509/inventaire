
#include <fstream>
#include <iostream>
#include "ForcePotion.h"
#include "HealthPotion.h"
#include "map.h"
#include <nlohmann/json.hpp>
#include "Inventaire.h"
#include "WeaponBow.h"
#include "WeaponSword.h"

using json = nlohmann::json;

int main() {
    Inventaire joueur;
    json j;

    // Load data from a JSON file
    std::ifstream i("datas.json");
    if (i.is_open()) {
        j = json::parse(i);
        i.close();
    }

    if (j.contains("InventaireJoueur")) {
        const json& inventaireJoueurJSON = j["InventaireJoueur"];
        for (const json& itemJSON : inventaireJoueurJSON) {
            std::string nom = itemJSON["nom"].get<std::string>();
            int qualitePotion = itemJSON["Qualitepotion"];
            int Value = itemJSON["Value"];
            int type = itemJSON["type"];

            // Add objects to the inventory based on their type
            if (type == 1) {
                joueur.push(new HealthPotion(nom, qualitePotion, Value));
            }
            if (type == 2) {
                joueur.push(new ForcePotion(nom, qualitePotion, Value));
            }
            if (type == 3) {
                joueur.push(new WeaponBow(nom, qualitePotion, Value));
            }
            if (type == 4) {
                joueur.push(new WeaponSword(nom, qualitePotion, Value));
            }
            if (type == 5) {
                joueur.push(new map(nom));
            }
        }
    }

    // Interactive menu for the user
    bool continueSelection = true;
    do {
        system("cls"); // Clears the screen (may not work on all operating systems).
        joueur.dispay(); // Display the inventory.

        char choise2;
        int choise1;
        std::cout << "Hello, please select an item from the inventory:\n";
        std::cin >> choise1;

        if (choise1 >= 0 && choise1 <= joueur.getInventaire().size()) {
            Item* selectedItem = joueur.getInventaire()[choise1 - 1];

            switch (selectedItem->getType()) {
            case 1: // HealthPotion
            {
                HealthPotion* healthPotion = dynamic_cast<HealthPotion*>(selectedItem);
                if (healthPotion) {
                    healthPotion->Use();
                    joueur.RemoveItem(choise1 - 1);
                }
                break;
            }
            case 2: // ForcePotion
            {
                ForcePotion* forcePotion = dynamic_cast<ForcePotion*>(selectedItem);
                if (forcePotion) {
                    forcePotion->Use();
                    joueur.RemoveItem(choise1 - 1);
                }
                break;
            }
            case 3: // WeaponBow
            {
                WeaponBow* bow = dynamic_cast<WeaponBow*>(selectedItem);
                if (bow) {
                    bow->Use();
                }
                break;
            }
            case 4: // WeaponSword
            {
                WeaponSword* sword = dynamic_cast<WeaponSword*>(selectedItem);
                if (sword) {
                    sword->Use();
                }
                break;
            }
            case 5: // map
            {
                map* mapItem = dynamic_cast<map*>(selectedItem);
                if (mapItem) {
                    mapItem->Use();
                }
                break;
            }
            default:
                std::cout << "Unknown item in the inventory" << std::endl;
                break;
            }
        }
        else {
            std::cout << "Invalid item index." << std::endl;
        }

        std::cout << "Do you want to select another item? [y] yes , [n] no\n";
        std::cin >> choise2;

        if (choise2 == 'n') {
            continueSelection = false;
        }
    } while (continueSelection);

    std::cout << "Thank you for testing my inventory.\n";

    // Save data to a JSON file
    json data;
    json inventaireJoueurJSON;

    for (const auto& item : joueur.getInventaire()) {
        json itemJSON;
        itemJSON["type"] = item->getType();
        itemJSON["nom"] = item->getNom();
        itemJSON["Qualitepotion"] = item->getQualite();
        itemJSON["Value"] = item->getValue();
        inventaireJoueurJSON.push_back(itemJSON);
    }

    data["InventaireJoueur"] = inventaireJoueurJSON;

    std::ofstream o("datas.json");
    o << std::setw(4) << data << std::endl;
    o.close();

    return 0;
}

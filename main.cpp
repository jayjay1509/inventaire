
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

int main()
{
    Inventaire joueur;
    json j;

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
 

    std::cout << "Bonjour, veuillez selectionner un item dans l'inventaire :\n";

    joueur.push(new HealthPotion ("potion de soin ", 2, 25));
    joueur.push(new ForcePotion ("potion de force  ", 1, 10));
    joueur.push(new WeaponSword("epee de la mort", 1, 25));
    joueur.push(new WeaponSword("Arc de la mort", 1, 30));
    joueur.push(new map("maps de ou est ta mere "));

    joueur.dispay();

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
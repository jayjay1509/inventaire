
#include <fstream>
#include <iostream>

#include "ForcePotion.h"
#include "HealthPotion.h"
#include "map.h"
#include <nlohmann/json.hpp>
#include "Inventaire.h"


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
            int hp = itemJSON["hp"];
            int type = itemJSON["type"];

            if (type == 1) {
                std::string nomPotion = nom.empty() ? "Potion de guérison" : nom;
                HealthPotion potion(nomPotion, qualitePotion, hp);
                joueur.push(potion);
            }
        }
    }





 

    std::cout << "Bonjour, veuillez sélectionner un item dans l'inventaire :\n";

    HealthPotion potionHealth1("potion de soin", 1, 10);
    HealthPotion potionHealth2("potion de soin 1", 14, 20);
    joueur.push(potionHealth1);
    joueur.push(potionHealth2);



    joueur.dispay();

  
    json inventaireJoueurJSON;

    for (const auto& item : joueur.getInventaire()) {
        json itemJSON;
        itemJSON["type"] = item->getType();
        itemJSON["nom"] = item->getNom().c_str();
        itemJSON["Qualitepotion"] = item->getQualitepotion();
        itemJSON["hp"] = item->gethp();
        inventaireJoueurJSON.push_back(itemJSON);
    }

    

   


    
    j["InventaireJoueur"] = inventaireJoueurJSON;

    std::ofstream o("datas.json");
    o << std::setw(4) << j << std::endl;
    o.close();

    return 0;
}
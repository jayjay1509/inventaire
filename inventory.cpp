
#include <iostream>

#include "ForcePotion.h"
#include "HealthPotion.h"
#include "map.h"
#include <nlohmann/json.hpp>
#include "Inventaire.h"

using json = nlohmann::json;

int main()
{
	//ForcePotion potionForce_nv1("potion_nv1", 1,1);
	HealthPotion potionHealth_nv1("potion_nv1", 1,1);
	//potionForce_nv1.Use();
	//map australie("lal");
	//australie.Use();
	Inventaire joueur;

	joueur.push(potionHealth_nv1);
	joueur.push(potionHealth_nv1);
	joueur.dispay();

	
	return 0;
}

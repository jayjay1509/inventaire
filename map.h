#pragma once
#include <iostream>

#include "Item.h"
class map :
    public Item
{
public:
    map(std::string nameForItem) : Item(nameForItem){}

    void Use();
  
};


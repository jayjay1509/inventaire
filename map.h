#pragma once
#include <iostream>

#include "Item.h"
class map :
    public Item
{
public:
    map(std::string nameForItem) : Item(nameForItem) {}

    void Use();
    std::string tostring()override {  return  NameForItem; }
    int getValue() const override { return 0; }
    int getType() const override { return 5; }
    int getQualite() const override { return 0; }
};


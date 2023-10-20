#pragma once
#include <string>

class Item
{
protected:
	std::string NameForItem;
public:
	Item(std::string NameForItem) : NameForItem(NameForItem){};

	virtual void Use() = 0;
	virtual  std::string tostring() = 0;

};


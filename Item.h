#pragma once
#include <string>
#include <nlohmann/json.hpp>

class Item
{
protected:
	std::string NameForItem;
public:
	Item(std::string NameForItem) : NameForItem(NameForItem) {};

	virtual void Use() = 0;
	virtual  std::string tostring() = 0;
	virtual int getQualitepotion() const = 0;
	virtual int gethp() const = 0;
	virtual int getType() const = 0;

	std::string getNom() const
	{
		return NameForItem;
	}
	
};





#pragma once
#include <string>
#include <nlohmann/json.hpp>
enum class Qualite
{
	Commun,
	rare,
	Epic
};
class Item
{
protected:
	std::string NameForItem;
public:
	Item(std::string NameForItem) : NameForItem(NameForItem) {};

	virtual void Use() = 0;
	virtual  std::string tostring() = 0;
	virtual int getQualite() const = 0;
	virtual int getValue() const = 0;
	virtual int getType() const = 0;
	

	std::string getNom() const
	{
		return NameForItem;
	}
	
};





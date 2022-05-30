#include "Item.h"

Item::Item()
{
	this->name = nullptr;
}

string Item::getName()
{
	return this->name;
}

void Item::setName(string name)
{
	this->name = name;
}
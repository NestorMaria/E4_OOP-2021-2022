#include "Miscellaneous.h"

Miscellaneous::Miscellaneous()
{
	this->count = 0;
}

string Miscellaneous::getInfo()
{
	return this->getName() + " : " + 
		to_string(this->count) + " items";
}

void Miscellaneous::setQuantity(int count)
{
	this->count = count;
}
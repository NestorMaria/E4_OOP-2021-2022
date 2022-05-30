#include "Food.h"

Food::Food()
{
	this->quantity = 0;
}

void Food::setQuantity(float quantity)
{
	this->quantity = quantity;
}

string Food::getInfo()
{
	return this->getName() + " : "
		+ to_string(this->quantity) + " kg";
}
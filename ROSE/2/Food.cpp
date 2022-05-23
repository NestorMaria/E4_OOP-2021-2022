#include "Food.h"


void Food :: setQuantity(float quantity)
{
	this->quantity = quantity;
}

string Food::getInfo()
{
	printf("%f kg", this->quantity);
}
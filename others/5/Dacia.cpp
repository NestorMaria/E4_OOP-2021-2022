#include "Dacia.h"

Dacia::Dacia()
{
	this->capacitate = 0;
	this->culoare = nullptr;
}

void Dacia::setCapacitate(int capacitate)
{
	this->capacitate = capacitate;
}

void Dacia::setCuloare(string culoare)
{
	this->culoare = culoare;
}

string Dacia::getName()
{
	return "Dacia";
}
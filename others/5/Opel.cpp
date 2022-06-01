#include "Opel.h"

Opel::Opel()
{
	this->capacitate = 0;
	this->culoare = nullptr;
	this->anFabricatie = 0;
}

void Opel::setCapacitate(int capacitate)
{
	this->capacitate = capacitate;
}

void Opel::setCuloare(string culoare)
{
	this->culoare = culoare;
}

void Opel::setAnFabricatie(int anFabricatie)
{
	this->anFabricatie = anFabricatie;
}

int Opel::getAnFabricatie()
{
	return this->anFabricatie;
}

string Opel::getName()
{
	return "Opel";
}
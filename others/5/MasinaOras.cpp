#include "MasinaOras.h"

MasinaOras::MasinaOras()
{
	this->capacitate = 0;
	this->culoare = nullptr;
}

int MasinaOras::getCapacitate()
{
	return this->capacitate;
}

string MasinaOras::getCuloare()
{
	return this->culoare;
}
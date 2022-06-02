#include "Cerc.h"

Cerc::Cerc()
{
	this->x = 0;
	this->y = 0;
	this->raza = 0;
}

void Cerc::set(int x, int y, int raza)
{
	this->x = x;
	this->y = y;
	this->raza = raza;
}

void Cerc::Paint()
{
	cout << "cerc(" << this->x << "," << this->y
		<< "," << this->raza << ")";
}
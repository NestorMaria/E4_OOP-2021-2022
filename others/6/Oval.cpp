#include "Oval.h"

Oval::Oval()
{
	this->x = 0;
	this->y = 0;
	this->raza1 = 0;
	this->raza2 = 0;
}

void Oval::set(int x, int y, int raza1, int raza2)
{
	this->x = x;
	this->y = y;
	this->raza1 = raza1;
	this->raza2 = raza2;
}

void Oval::Paint()
{
	cout << "Oval(" << this->x << "," << this->y
		<< "," << this->raza1 << "," << this->raza2
		<< ")";
}
#include "Forme.h"

Forme::Forme()
{
	this->count = 0;
}

void Forme::Add(Forma* x)
{
	if (this->count < 100)
	{
		this->f[this->count] = x;
		this->count++;
	}
}

void Forme::Paint()
{
	for (int i = 0; i < this->count; i++)
		cout << this->f[i] << endl;
}
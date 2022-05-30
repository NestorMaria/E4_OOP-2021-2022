#pragma once
#include "Biblioteca.h"

Biblioteca::Biblioteca()
{
	this->count = 0;
	this->carti[this->count] = nullptr;
}

Biblioteca::~Biblioteca()
{
	for (int i = 0; i < this->count; i++)
		delete[] this->carti[i];
}

Biblioteca::Iterator Biblioteca::begin()
{
	return Iterator(0, this);
}

Biblioteca::Iterator Biblioteca::end()
{
	return Iterator(this->count, this);
}

Biblioteca::Iterator::Iterator(int index, Biblioteca* bibl):
	index(index),bibl(bibl)
{
	//ctor for Iterator
}

bool Biblioteca::Iterator::operator != (Iterator const &otherIterator)const
{
	return this->index != otherIterator.index;
}

Carte* Biblioteca::Iterator::operator *()const
{
	return this->bibl->carti[this->index];
}

Biblioteca::Iterator& 
Biblioteca::Iterator::operator ++()
{
	++this->index;
	return *this;
}

Biblioteca& Biblioteca::operator +=(Carte* c)
{
	if (this->count < 100)
	{
		this->carti[this->count] = c;
		this->count++;
		return *this;
	}
	else
	{
		throw runtime_error("Prea multe carti in biblioteca");
	}
}

Biblioteca::operator int() const
{
	return this->count;
}
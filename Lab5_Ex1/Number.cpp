#include "Number.h"

Number::Number(const char* value, int base)
{
	if (base < 2 || base>16)
		return;
	this->base = base;
	this->lenght = int(strlen(value));
	this->value = new char[this->lenght];
	strcpy(this->value, value);
}

Number::~Number()
{
	this->lenght = 0;
}

//Number::Number(const Number& other):Number(other.base,other.lenght,other.value){};

Number::Number(const char* value)
{
	this->lenght = int(strlen(value));
	this->value = new char[this->lenght];
	strcpy(this->value, value);
}

Number::Number(int value)
{
	int i = 0;
	char aux[100];
	while (value)
	{
		aux[i++] = char(value % 10 + '0');
		value /= 10;
	}
	aux[i] = '\n';
	this->lenght = i;
	this->value = new char[this->lenght];
	for (i = 0; i < this->lenght; i++)
		this->value[i] = aux[this->lenght - i - 1];
	this->value[this->lenght]= '\0';
}

Number::Number(const Number& other)
{
	this->base = other.base;
	this->lenght = other.lenght;
	this->value = new char[this->lenght];
	strcpy(this->value, other.value);
}

Number& Number::operator--()
{
	strcpy(this->value, this->value+1);
	return *this;
}

Number& Number::operator--(int)
{
	this->value[strlen(this->value) - 1] = '\0';
	return *this;
}


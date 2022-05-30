#include "Roman.h"

Roman::Roman(string nume, string autor) :
	nume(nume), autor(autor)
{
	//ctor for Roman
}

string Roman::GetInfo()
{
	return "Roman " + this->nume + " de " 
		+ this->autor;
} 
#include "DreptunghiRotit.h"

DreptunghiRotit::DreptunghiRotit()
{
	this->unghi = 0;
}

void DreptunghiRotit::set(int x, int y,
	int latime, int lungime,int unghi)
{
	this->x = x;
	this->y = y;
	this->latime = latime;
	this->lungime = lungime;
	this->unghi = unghi;
}

void DreptunghiRotit::Paint()
{
	cout << "dreptunghi(" << this->x << ","
		<< this->y << "," << this->lungime << ","
		<< this->latime << ") rotit la " <<
		this->unghi << " de grade";
}
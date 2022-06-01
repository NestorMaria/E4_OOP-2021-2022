#pragma once
#include "Masina.h"

class MasinaOras :public Masina
{
private:
	int capacitate;
	string culoare;
public:
	MasinaOras();
	virtual int getCapacitate() ;
	virtual string getCuloare() ;
};
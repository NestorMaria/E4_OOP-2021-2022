#pragma once
#include "MasinaOras.h"

class Opel :public MasinaOras
{
private:
	int capacitate;
	string culoare;
	int anFabricatie;
public:
	Opel();
	void setCapacitate(int capacitate);
	void setCuloare(string culoare);
	void setAnFabricatie(int anFabricatie);
	int getAnFabricatie();
	string getName()override;
};
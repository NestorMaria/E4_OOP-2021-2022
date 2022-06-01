#pragma once
#include "MasinaOras.h"

class Dacia :public MasinaOras
{
private:
	int capacitate;
	string culoare;
public:
	Dacia();
	void setCapacitate(int capacitate);
	void setCuloare(string culoare);
	string getName()override;
};
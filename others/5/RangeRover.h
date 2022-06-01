#pragma once
#include "SUV.h"

class RangeRover :public SUV
{
private:
	int consum;
public:
	RangeRover();
	void setConsum(int consum);
	string getName()override;
};
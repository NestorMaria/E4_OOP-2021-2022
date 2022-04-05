#pragma once
#include "Car.h"

class Mercedes :public Car
{
public:
	Mercedes();
	void Print()
	{
		printf("Mercedes\n");
	}
};
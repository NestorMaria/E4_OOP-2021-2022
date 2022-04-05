#include "Dacia.h"
#include "Weather.h"

Dacia::Dacia()
{

	setFuelCapacity(30);
	setFuelConsumption(2);
	averageSpeed[Rainy] = 50;
	averageSpeed[Snowy] = 38;
	averageSpeed[Sunny] = 67;
}



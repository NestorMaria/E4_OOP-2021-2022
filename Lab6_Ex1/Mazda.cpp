#include "Mazda.h"
#include "Weather.h"

Mazda::Mazda()
{
	setFuelCapacity(60);
	setFuelConsumption(2);
	averageSpeed[Rainy] = 70;
	averageSpeed[Snowy] = 67;
	averageSpeed[Sunny] = 92;
}


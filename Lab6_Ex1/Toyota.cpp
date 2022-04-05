#include "Toyota.h"
#include "Weather.h"

Toyota::Toyota()
{
	setFuelCapacity(50);
	setFuelConsumption(4);
	averageSpeed[Rainy] = 60;
	averageSpeed[Snowy] = 55;
	averageSpeed[Sunny] = 80;
}



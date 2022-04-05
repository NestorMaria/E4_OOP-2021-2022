#include "Mercedes.h"
#include "Weather.h"

Mercedes::Mercedes()
{
	setFuelCapacity(50);
	setFuelConsumption(6);
	averageSpeed[Rainy] = 60;
	averageSpeed[Snowy] = 58;
	averageSpeed[Sunny] = 87;
}


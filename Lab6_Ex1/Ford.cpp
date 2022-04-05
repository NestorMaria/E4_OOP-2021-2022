#include "Ford.h"
#include "Weather.h"

Ford::Ford()
{
	setFuelCapacity(35);
	setFuelConsumption(1);
	averageSpeed[Rainy] = 52;
	averageSpeed[Snowy] = 40;
	averageSpeed[Sunny] = 70;
}



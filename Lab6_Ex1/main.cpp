#include "Car.h"
#include "Weather.h"
#include "Dacia.h"
#include "Toyota.h"
#include "Mercedes.h"
#include "Ford.h"
#include "Mazda.h"
#include "Circuit.h"

int main()
{
	Circuit c;
	c.SetLenght(100);
	c.SetWeather(Weather::Rainy);
	c.AddCar(new Dacia());
	c.AddCar(new Toyota());
	c.AddCar(new Mercedes());
	c.AddCar(new Ford());
	c.AddCar(new Mazda());
	c.Race();
	c.ShowFinalRanks();
	c.ShowWhoDidNotFinish();
	return 0;
}
#pragma once
#include "Car.h"
#include "Weather.h"

class Circuit
{
private:
	int lenght;
	Weather weather;
	int NoOfCars = 0;
	Car* cars[100];

public:
	void SetLenght(int lungime);
	int GetLenght();
	void SetWeather(Weather vreme);
	Weather GetWeather();
	void AddCar(Car* masina);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};
#include "Circuit.h"

void Circuit::SetLenght(int lungime)
{
	lenght = lungime;
}

int Circuit::GetLenght()
{
	return lenght;
}

void Circuit::SetWeather(Weather vreme)
{
	weather = vreme;
}

Weather Circuit::GetWeather()
{
	return weather;
}

void Circuit::AddCar(Car* masina)
{
	cars[NoOfCars++] = masina;
}

void Circuit::Race()
{
	int LungimeCursa = GetLenght();
	Weather vreme = GetWeather();

	for (int i = 0; i < NoOfCars; i++)
	{
		if (cars[i]->getFuelCapacity() * 100 / cars[i]->getFuelConsumption() >= LungimeCursa)
			cars[i]->TimeToFinish = LungimeCursa / cars[i]->averageSpeed[vreme];
		else
			cars[i]->TimeToFinish = -1;
	}
}

void Circuit::ShowFinalRanks()
{
	int i, j, aux;
	for(i=0;i<NoOfCars-1;i++)
		for(j=i+1;j<NoOfCars;j++)
			if (cars[i]->TimeToFinish > cars[j]->TimeToFinish)
			{
				aux = cars[i]->TimeToFinish;
				cars[i]->TimeToFinish = cars[j]->TimeToFinish;
				cars[j]->TimeToFinish = aux;
			}
	printf("[WINNERS]Urmatoarele masini au castigat:\n");
	for (i = 0; i < NoOfCars; i++)
		if (cars[i]->TimeToFinish != -1)
			cars[i]->Print();
}

void Circuit::ShowWhoDidNotFinish()
{
	printf("[LOSERS]Urmatoarele masini au pierdut:\n");
	for (int i = NoOfCars - 1; i >= 0; i--)
		if (cars[i]->TimeToFinish == -1)
			cars[i]->Print();
}
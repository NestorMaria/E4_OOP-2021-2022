#include "Circuit.h"

void Circuit::SetLenght(int lungime)
{
	this->lenght = lungime;
}

int Circuit::GetLenght()
{
	return this->lenght;
}

void Circuit::SetWeather(Weather vreme)
{
	this->weather = vreme;
}

Weather Circuit::GetWeather()
{
	return this->weather;
}

void Circuit::AddCar(Car* masina)
{
	cars[NoOfCars++] = masina;
}

void Circuit::Race()
{
	float LungimeCursa = GetLenght();
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
	for (i = 0; i < NoOfCars; i++)
		if (cars[i]->TimeToFinish != -1)
			cars[i]->Print();
		else
			printf("Nu a incheiat cursa\n");
}
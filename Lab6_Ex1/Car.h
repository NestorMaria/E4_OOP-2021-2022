#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Car
{
private:
	int fuelCapacity;
	float fuelConsumption;
public:
	float averageSpeed[3];
	float TimeToFinish;
	void setFuelCapacity(int x)
	{
		fuelCapacity = x;
	}

	void setFuelConsumption(float x)
	{
		fuelConsumption = x;
	}

	int getFuelCapacity()
	{
		return fuelCapacity;
	}

	float getFuelConsumption()
	{
		return fuelConsumption;
	}

	virtual void Print() {};
};

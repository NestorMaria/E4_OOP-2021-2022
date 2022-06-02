#pragma once
#pragma once
#include "Forma.h"

class Oval :public Forma
{
private:
	int x, y, raza1,raza2;
public:
	Oval();
	void set(int x, int y, int raza1,int raza2);
	void Paint();
};
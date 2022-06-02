#pragma once
#include "Forma.h"

class Cerc :public Forma
{
private:
	int x, y, raza;
public:
	Cerc();
	void set(int x, int y, int raza);
	void Paint();
};
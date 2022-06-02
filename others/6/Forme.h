#pragma once
#include "Forma.h"

class Forme
{
private:
	Forma* f[100];
	int count;
public:
	Forme();
	void Add(Forma* x);
	void Paint();
};
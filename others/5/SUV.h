#pragma once
#include "Masina.h"

class SUV :public Masina
{
private:
	int consum;
public:
	SUV();
	virtual int getConsum() ;
};
#pragma once

class Number
{
	//add data members
public:
	Number(const char* values, int base);
	~Number();

	//add operators and cppy/move constructor
	
	void SwitchBase(int newBase);
	void Print();
	int GetDigitsCount();
	int GetBase();
};
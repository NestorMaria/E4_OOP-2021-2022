#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Number
{
	//add data members
public:
	Number(const char* value, int base);
	~Number();

	//add operators and copy/move constructor

	void SwitchBase(int newBase);
	void Print();
	int GetDigitsCount();
	int GetBase();
};
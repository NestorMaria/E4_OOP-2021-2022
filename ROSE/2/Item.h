#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class Item
{
private:
	string name;
public:
	string getName();
	virtual string getInfo();
	void setName(string name);
};
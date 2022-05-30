#pragma once
#include <iostream>
#include <string>

using namespace std;

class Item
{
private:
	string name;
public:
	Item();
	string getName();
	virtual string getInfo()=0;
	void setName(string name);
};
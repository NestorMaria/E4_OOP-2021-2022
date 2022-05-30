#pragma once
#include "Item.h"

class Miscellaneous :public Item
{
private:
	int count;
public:
	Miscellaneous();
	string getInfo()override;
	void setQuantity(int count);
};
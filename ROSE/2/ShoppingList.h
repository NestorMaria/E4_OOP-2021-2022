#pragma once
#include "Item.h"

class ShoppingList
{
private:
	Item* a;
public:
	void addItem(Item* a);
	void printList();
};
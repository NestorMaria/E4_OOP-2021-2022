#pragma once
#include "Item.h"

class ShoppingList
{
private:
	Item* items[100];
	int count;
public:
	ShoppingList();
	void addItem(Item* someItem);
	void printList();
};
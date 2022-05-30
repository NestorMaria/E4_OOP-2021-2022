#include "ShoppingList.h"

ShoppingList::ShoppingList()
{
	this->count = 0;
	this->items[this->count] = nullptr;
}

void ShoppingList::addItem(Item* someItem)
{
	this->items[this->count] = someItem;
	this->count++;
}

void ShoppingList::printList()
{
	for (int i=0;i<this->count;i++)
	{
		cout << items[i]->getInfo() << "; ";
	}
}
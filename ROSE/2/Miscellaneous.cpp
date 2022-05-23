#include "Miscellaneous.h"

string Miscellaneous::getInfo()
{
	printf("%d items", this->count);
}

void Miscellaneous::setCount(int count)
{
	this->count = count;
}
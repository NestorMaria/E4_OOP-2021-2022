#include "RangeRover.h"

RangeRover::RangeRover()
{
	this->consum = 0;
}

void RangeRover::setConsum(int consum)
{
	this->consum = consum;
}

string RangeRover::getName()
{
	return "RangeRover";
}
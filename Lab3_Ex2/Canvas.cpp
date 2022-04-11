#pragma once
#include "Canvas.h"

Canvas::Canvas(int width, int height)
{
	this->lines = height;
	this->columns = width;
	matrix = new char* [this->lines];
	for (int i = 0; i < this->lines; i++)
		matrix[i] = new char[this->columns];

	for (int i = 0; i < this->lines; i++)
		for (int j = 0; j < this->columns; j++)
			matrix[i][j] = ' ';
}
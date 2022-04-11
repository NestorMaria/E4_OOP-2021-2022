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

void Canvas::SetPoint(int x, int y, char ch)
{
	matrix[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	int dx = x2 - x1;
	int dy = y2 - y1;
	int D = 2 * dy - dx;
	int y = y1;

	for (int x = x1; x < x2; x++)
	{
		SetPoint(x, y, ch);
		if (D > 0)
		{
			y = y + 1;
			D = D - 2 * dx;
		}
		D = D + 2 * dy;
	}
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	int i;
	for (i = 0; i < 360; i++)
		SetPoint(cos(i * 3.14 / 180) * ray + x, 2 * sin(i * 3.14 / 180) * ray + y, ch);
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	int i;
	for (i = 0; i < 360; i++)
		DrawLine(x, y, cos(i * 3.14 / 180) * ray + x, 2 * sin(i * 3.14 / 180) * ray + y, ch);
}
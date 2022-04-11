#include "Canvas.h"

int main()
{
	Canvas canvas(30, 30);
	
	canvas.FillCircle(15, 15, 10, 'i');
	canvas.DrawRect(2, 2, 29, 29, 'P');

	canvas.Print();

	return 0;
}
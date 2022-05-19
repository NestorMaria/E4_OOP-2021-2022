#include "Exceptions.h"

int main()
{
	Array<int> p(3);
	p += 12;
	p += 20;
	p += 506;
	p.Insert(6, 10);
	cout << p.Find(20) << endl;



	Array<int>d(6);
	d += 43;
	d += 25;
	d += 20;
	d += 1;
	d.Sort();
	cout << d.BinarySearch(25) << endl;

	return 0;
}
#include <iostream>

double operator"" _Kelvin(unsigned long long x)
{
	return (x - 273.15);
}

double operator"" _Fahrenheit(unsigned long long x)
{
	return ((x - 32) / 1.8);
}


int main()
{
	double a = 300_Kelvin;
	double b = 120_Fahrenheit;

	std::cout << a << ' ' << b << '\n';
	return 0;
}
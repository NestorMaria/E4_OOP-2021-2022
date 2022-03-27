#include "Math.h"

int Math::Add(int x, int y)
{
	return x + y;
}

int Math::Add(int x, int y, int z)
{
	return x + y + z;
}

int Math::Add(double x, double y)
{
	return int(x + y);
}

int Math::Add(double x, double y, double z)
{
	return int(x + y + z);
}

int Math::Mul(int x, int y)
{
	return x * y;
}

int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}

int Math::Mul(double x, double y)
{
	return int(x * y);
}

int Math::Mul(double x, double y, double z)
{
	return int(x * y * z);
}

int Math::Add(int count, ...)
{
	int sum = 0;
	va_list(args);
	va_start(args, count);
	for (int i = 0; i < count; i++)
		sum += va_arg(args, int);
	va_end(args);
	return sum;
}

char* Math::Add(const char* x, const char* y)
{
	char* s;
	s = (char*)malloc(strlen(x) + strlen(y) + 1);
	int k = 0;
	for (int i = 0; i < strlen(x); i++, k++)
		s[k] = x[i];
	for (int i = 0; i < strlen(y); i++, k++)
		s[k] = y[i];
	s[k] = '\0';
	return s;
}
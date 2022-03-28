#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Number
{
private:
	int base = 10, lenght;
	char* value;

	static int btoten(const char* value, int base);
	static const char* tentob(int nr, int base);

public:
	Number(const char* value, int base);
	~Number();

	Number(const Number& other);
	Number(const char* value);
	Number(int value);

	Number& operator--();
	Number& operator--(int i);

	Number& operator+=(const Number& second);
	Number& operator-=(const Number& second);


	void SwitchBase(int newBase);
	void Print();
	int GetDigitsCount();
	int GetBase();

	friend Number operator+(Number left, const Number& right)
	{
		left = left + right;
		return left;
	}

	friend Number operator-(Number left, const Number& right)
	{
		left = left - right;
		return left;
	}

	friend bool operator<(const Number& left, const Number& right)
	{
		int a, b;
		a = btoten(left.value, left.base);
		b = btoten(right.value, right.base);
		return (a < b);
	}

	friend bool operator>(const Number& left, const Number& right)
	{
		int a, b;
		a = btoten(left.value, left.base);
		b = btoten(right.value, right.base);
		return (a > b);
	}

	friend bool operator<=(const Number& left, const Number& right)
	{
		int a, b;
		a = btoten(left.value, left.base);
		b = btoten(right.value, right.base);
		return (a <= b);
	}

	friend bool operator>=(const Number& left, const Number& right)
	{
		int a, b;
		a = btoten(left.value, left.base);
		b = btoten(right.value, right.base);
		return (a >= b);
	}

	friend bool operator==(const Number& left, const Number& right)
	{
		int a, b;
		a = btoten(left.value, left.base);
		b = btoten(right.value, right.base);
		return (a == b);
	}

	friend bool operator!=(const Number& left, const Number& right)
	{
		int a, b;
		a = btoten(left.value, left.base);
		b = btoten(right.value, right.base);
		return (a != b);
	}

};
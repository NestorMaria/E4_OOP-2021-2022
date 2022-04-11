#pragma once
#include <iostream>
using namespace std;

template <class A>
class Vector
{
private:
	int lenght;
	int size;
	A* items;

	void Resizing()
	{
		int new_size = size * 2;
		A* new_items = new A[new_size];
		memcpy(new_items, items, size * sizeof(A));
		this->size = new_size;
		delete[] this->items;
		this->items = new_items;
	}
public:
	Vector() :lenght(0), size(1)
	{
		items = new A[this->size];
	}

	void Push(const A& x)
	{
		if (this->lenght + 1 > this->size)
			Resize();
		this->items[lenght++] = x;
	}

	const A Pop()
	{
		return this->items[--lenght];
	}

	void Remove(int index);
	void Insert(const A& x, int index);
	void Sort();
	const A* Get(int index);
	void Set(const A& x,int index);
	int Count();
	int FirstIndexOf(const A& x);
};
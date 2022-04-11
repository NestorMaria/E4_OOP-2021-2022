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
			Resizing();
		this->items[lenght++] = x;
	}

	const A Pop()
	{
		return this->items[--lenght];
	}

	void Remove(int index)
	{
		for (int i = index; i < this->lenght-1; i++)
			this->items[i] = this->items[i + 1];
	}

	void Insert(const A& x, int index)
	{
		this->lenght++;
		if (this->lenght + 1 > this->size)
			Resizing();
		for (int i = this->lenght - 1; i > index; i--)
			this->items[i] = this->items[i - 1];
		this->items[index] = x;
	}

	void Sort()
	{
		int i, j, aux;
		for(i=0;i<this->lenght-1;i++)
			for(j=i+1;j<this->lenght;j++)
				if (this->items[i] > this->items[j])
				{
					aux = this->items[i];
					this->items[i] = this->items[j];
					this->items[j] = aux;
				}
	}

	const A Get(int index)
	{
		if(index<this->lenght)
			return this->items[index];
		return -1;
	}

	void Set(const A& x, int index)
	{
		if (index < this->lenght)
			this->items[index] = x;
	}

	int Count()
	{
		return this->lenght;
	}

	int FirstIndexOf(const A& x)
	{
		for (int i = 0; i < this->lenght; i++)
			if (this->items[i] == x)
				return i;
		return -1;
	}

	void Print()
	{
		for (int i = 0; i < this->lenght; i++)
			cout << this->items[i] << ' ';
		cout << endl;
	}
};
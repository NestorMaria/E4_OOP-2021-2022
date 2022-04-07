#pragma once
#include <iostream>
using namespace std;

template <class A>
class AVector
{
private:
	int lenght;
	A* items;
	int size;

	void Resize()
	{
		int new_size = size * 2;
		A* new_items = new A[new_size];
		memcpy(new_items, items, size * sizeof(A));
		this->size = new_size;
		delete[] this->items;
		this->items = new_items;
	}
public:
	AVector(): lenght(0), size(1) { items = new A[this->size]; }

	//push
	void Push(const A& value)
	{
		if (this->lenght + 1 > this->size)
			Resize();
		this->items[lenght++] = value;
	}

	//pop
	const A Pop()
	{
		return this->items[--lenght];
	}

	//delete/remove
	void Delete(int index)
	{
		for (int i = index; i < this->lenght - 1; i++)
			this->items[i] = this->items[i + 1];
		lenght--;
	}

	//insert
	void Insert(const A& value, int index)
	{
		lenght++;
		if (this->lenght - 1 > this->size)
			Resize();
		for (int i = this->lenght - 1; i > index; i--)
			this->items[i] = this->items[i - 1];
		this->items[index] = value;
	}

	//sort
	int compare(const A& a, const A& b)
	{
		if (a < b)return 1;
		return 0;
	}
	void Sort()
	{
		int i, j;
		for (i = 0; i < this->lenght - 1; i++)
			for (j = i + 1; j < this->lenght; j++)
				if (!compare(this->items[i], this->items[j]))
					swap(this->items[i], this->items[j]);
	}


	//get
	const A* Get(int index)
	{
		if (index < this->lenght)
			return this->items[index];
		return nullptr;
	}

	//set
	void Set(const A& value, int index)
	{
		if (index < this->lenght)
			this->items[index] = value;
	}

	//count
	int Count()
	{
		return this->lenght;
	}

	//firstIndexOf
	int FirstIndexOf(const A& value)
	{
		for (int i = 0; i < this->lenght; i++)
			if (this->items[i] == value)
				return i;

	}

	void Afisare()
	{
		int i;
		for (i = 0; i < this->lenght; i++)
			cout << this->items[i] << ' ';
		cout << endl;
	}
};
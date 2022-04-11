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
public:
	void Push(const A& x);
	const A Pop();
	void Remove(int index);
	void Insert(const A& x, int index);
	void Sort();
	const A* Get(int index);
	void Set(const A& x,int index);
	int Count();
	int FirstIndexOf(const A& x);
};
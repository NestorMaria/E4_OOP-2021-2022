#pragma once
#include <iostream>
#include <string.h>
#include <stdarg.h>
#include <cstdlib>

using namespace std;

class Sort
{
private:
	int nrValues;
	int* v;
public:
	void InsertSort(bool ascendent=false);
	void QuickSort(int st,int dr,bool ascendent = false);
	void BubbleSort(bool ascendent = false);
	void Print();
	int GetElementsCount();
	int GetElementFromIndex(int index);
	
	Sort(int nrValues, int min, int max);
	Sort(const Sort& other);
	Sort(int* v, int nrValues);
	Sort(int count, ...);
	Sort(const char* s);
};
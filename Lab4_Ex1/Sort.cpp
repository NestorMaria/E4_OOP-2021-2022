#include "Sort.h"

void Sort::InsertSort(bool ascendent)
{
	for (int i = 1; i < nrValues; i++)
	{
		int temp = v[i];
		int j = i - 1;
		if (ascendent)
		{
			while (j >= 0 && temp < v[j])
				v[j + 1] = v[j], j--;
			v[j + 1] = temp;
		}
		else
		{
			while (j >= 0 && temp > v[j])
				v[j + 1] = v[j], j--;
			v[j + 1] = temp;
		}
	}
}

int Pivot(int* v, int st, int dr, bool ascendent)
{
	int i, j, di, dj;
	i = st; j = dr;
	di = 0; dj = 1;
	while (i < j)
	{
		if (ascendent)
		{
			if (v[i] > v[j])
			{
				v[i] = v[i] + v[j];
				v[j] = v[i] - v[j];
				v[i] = v[i] - v[j];
				di = di + dj;
				dj = di - dj;
				di = di - dj;
			}
			i = i + di;
			j = j - dj;
		}
		else
		{
			if (v[i] < v[j])
			{
				v[i] = v[i] + v[j];
				v[j] = v[i] - v[j];
				v[i] = v[i] - v[j];
				di = di + dj;
				dj = di - dj;
				di = di - dj;
			}
			i = i + di;
			j = j - dj;
		}
	}
	return i;
}

void Sort::QuickSort(int st, int dr, bool ascendent)
{
	int p;
	if (st <= dr)
	{
		p = Pivot(this->v, st, dr, ascendent);
		QuickSort(st, p - 1, ascendent);
		QuickSort(p + 1, dr, ascendent);
	}
}

void Sort::BubbleSort(bool ascendent)
{
	bool sortat=false;
	do
	{
		sortat = true;
		for(int i=0;i<nrValues-1;i++)
			if (v[i] > v[i + 1])
			{
				v[i] = v[i] + v[i + 1];
				v[i + 1] = v[i] - v[i + 1];
				v[i] = v[i] - v[i + 1];
				sortat = false;
			}
	} while (!sortat);
}

void Sort::Print()
{
	for (int i = 0; i < nrValues; i++)
		cout << v[i] << ' ';
	cout << endl;
}

int Sort::GetElementsCount()
{
	return nrValues;
}

int Sort::GetElementFromIndex(int index)
{
	if (index > -1 && index < nrValues)
		return v[index];
	return -1;
}

Sort::Sort(int nrValues, int min, int max)
{
	this->nrValues = nrValues;
	this->v = new int[this->nrValues];
	for (int i = 0; i < this->nrValues; i++)
		v[i] = rand() % (max - min) + min;
}

Sort::Sort(const Sort& other):Sort(other.nrValues,other.v){}

Sort::Sort(int count, ...)
{
	this->nrValues = nrValues;
	this->v = new int[this->nrValues];
	va_list(args);
	va_start(args, count);
	for (int i = 0; i < count; i++)
		this->v[i] = va_arg(args, int);
	va_end(args);
}

Sort::Sort(const char* s)
{
	char* sir = new char[strlen(s) + 1];
	strcpy(sir, s);
	int number = 0;
	for (int i = 0; sir[i]; i++)
		if (sir[i] == ',')
			number++;
	this->nrValues = number + 1;
	this->v = new int[this->nrValues];
	char* p = strtok(sir, ",");
	number = 0;
	while (p)
	{
		int id = 0;
		for (int i = 0; p[i]; i++)
			id = id * 10 + p[i] - '0';
		this->v[number++] = id;
		p = strtok(NULL, ",");
	}
}
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

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


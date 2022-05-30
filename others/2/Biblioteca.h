#pragma once
#include "Carte.h"

class Biblioteca
{
private:
	int count;
	Carte* carti[100];
public:
	Biblioteca();
	~Biblioteca();
	Biblioteca& operator += (Carte* c);

	class Iterator
	{
	private:
		int index;
		Biblioteca* bibl;
	public:
		Iterator(int index, Biblioteca* bibl);
		bool operator != (Iterator const&)const;
		Iterator& operator ++ ();
		Carte* operator * ()const;
	};

	Iterator begin();
	Iterator end();
	
	operator int() const;

	template <typename FilterFunction>
	void PrintFilter(FilterFunction fn);
};

template<typename FilterFunction>
void Biblioteca::PrintFilter(FilterFunction fn)
{
	for (auto c : *this)
	{
		if (fn(c))
		{
			cout << c->GetInfo()<<endl;
		}
	}
}
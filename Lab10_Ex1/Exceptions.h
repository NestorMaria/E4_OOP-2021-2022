#pragma once
#include <iostream>
#include <exception>

using namespace std;


class Compare
{
public:
	virtual int CompareElements(void* e1, void* e2)
	{
		int* e1_int = static_cast<int*>(e1);
		int* e2_int = static_cast<int*>(e2);
		return *e1_int - *e2_int;
	}
};



template<class T>
class ArrayIterator
{
private:
	int Current; 
	//mai adaugati si alte date si functii necesare pentru iterator
	T* element;
public:
	ArrayIterator()
	{
		this->Current = 0;
	}

	ArrayIterator(int value)
	{
		this->Current = value;
	}

	ArrayIterator& operator ++ ()
	{
		this->Current = this->Current + 1;
	}

	ArrayIterator& operator -- ()
	{
		this->Current = this->Current - 1;
	}

	bool operator= (ArrayIterator<T>& arrayIterator)
	{
		this->Current = arrayIterator.Current;
		return true;
	}

	bool operator!=(ArrayIterator<T>& arrayIterator)
	{
		if (this->Current != arrayIterator.Current)
			return true;
		return false;
	}

	T* GetElement()
	{
		return this->element;
	}
};


//EXCEPTIONS CLASSES
template<class T>
class EXPcapacity :public Array
{
	virtual const char* what() const throw()
	{
		return "The capacity is smaller than 0";
	}
};

template<class T>
class EXPoutOfRange :public Array
{
	virtual const char* what() const throw()
	{
		return "The index is out of range";
	}
};

template<class T>
class EXPinvalidComparation :public Array
{
	virtual const char* what() const throw()
	{
		return "Invalid compare function";
	}
};

template<class T>
class EXPemptyArray :public Array
{
	virtual const char* what() const throw()
	{
		return "The array is empty";
	}
};


template<class T>
class Array
{
private:
	//lista cu pointeri la obiecte de tipul T*
	T** List;
	//cate elemente sunt in lista
	int Capacity;
	int Size;
public:
	Array()
	{
		//lista nu e alocata,Capacity si Size = 0
		this->Capacity = 0;
		this->Size = 0;
		this->List = nullptr;
	}

	~Array()
	{
		//destructorul
		delete[] this->List;
	}

	Array(int capacity)
	{
		//lista e alocata cu 'capacity' elemente
		EXPcapacity e;
		try
		{
			if (capacity < 0)
				throw e;
			this->Capacity = capacity;
			this->Size = 0;
			this->List = new T * [capacity];
			for (int i = 0; i < this->Capacity; i++)
				this->List[i] = new T;
		}
		catch (EXPcapacity& e)
		{
			cout << "[EXCEPTION] " << e.what() << endl;
		}
	}

	Array(const Array<T>& otherArray)
	{
		//constructor de copiere
		this->Capacity = otherArray.Capacity;
		this->Size = otherArray.Size;
		this->List = new T * [Capacity];
		for (int i = 0; i < this->otherArray.Capacity; i++)
		{
			this->List[i] = new T;
			*this->List[i] = otherArray[i];
		}
	}

	T& operator[](int index)
	{
		// arunca exceptie daca index este out of range
		EXPoutOfRange e;
		try
		{
			if (index<0 || index>this->Size)
				throw e;
			return*(this->List[index]);
		}
		catch(EXPoutOfRange& e)
		{
			cout << "[EXCEPTION] " << e.what() << endl;
		}
	}

	const Array<T>& operator+=(const T& newElem)
	{
		//adauga un element de tipul T la sfarsitul listei si returneaza this
		if (this->Size == this->Capacity)
			this->Capacity = this->Capacity * 2;
		*(this->List[this->Size++]) = newElem;
		return *this;
	}

	const Array<T>& Insert(int index, const T& newElem)
	{
		//adauga un element pe pozitia index, returneaza this. Daca index e invalid, arunca o exceptie
		EXPoutOfRange e;
		try
		{
			if (index<0 || index > this->Size)
				throw e;
			for (int i = this->Capacity - 1; i > index; i--)
				*this->List[i] = *this->List[i - 1];
			*this->List[index] = newElem;
			if (this->Size == this->Capacity)
				this->Capacity = this->Capacity * 2;
		}
		catch(EXPoutOfRange& e)
		{
			cout << "[EXCEPTION] " << e.what() << endl;
		}
	}

	const Array<T>& Insert(int index, const Array<T> otherArray)
	{
		//adauga o lista pe pozitia index, returneaza this. Daca index e invalid, arunca o exceptie
		EXPoutOfRange e;
		try
		{
			if (index<0 || index>this->Size)
				throw e;
			//!!!!ADAUGAREA LISTEI PE POZITIA INDEX
		}
		catch(EXPoutOfRange& e)
		{
			cout << "[EXCEPTION] " << e.what() << endl;
		}
	}
	const Array<T>& Delete(int index)
	{
		//sterge un element de pe pozitia index, returneaza this. Daca index e invalid arunca o exceptie
		EXPoutOfRange e;
		try
		{
			if (index<0 || index>this->Size)
				throw e;
			for (int i = index; i < this->Size - 1; i++)
				*this->List[i] = *this->List[i + 1];
			this->Size--;
		}
		catch(EXPoutOfRange& e)
		{
			cout << "[EXCEPTION] " << e.what() << endl;
		}
	}

	bool operator=(const Array<T>& otherArray)
	{
		this->Capacity = otherArray.Capacity;
		this->Size = otherArray.Size;
		for (int i = 0; i < this->Capacity; i++)
			*this->List[i] = *otherArray.List[i];
		return true;
	}

	void Sort()
	{
		//sorteaza folosind comparatia intre elementele din T
		T aux;
		for(int i=0;i<this->Size-1;i++)
			for(j=i+1;j<this->Size;j++)
				if (*this->List[i] > *this->List[j])
				{
					aux = *this->List[i];
					*this->List[i] = *this->List[j];
					*this->List[j] = aux;
				}
	}
	void Sort(int(*compare)(const T&, const T&))
	{
		//sorteaza folosind o functie de comparatie
		EXPinvalidComparation e;
		try
		{
			if (compare == nullptr)
				throw e;
			T aux;
			for(int i=0;i<this->Size-1;i++)
				for(int j=i+1;j<this->Size;j++)
					if (compare(*this->List[i], *this->List[j]) > 0)
					{
						aux = *this->List[i];
						*this->List[i] = *this->List[j];
						*this->List[j] = aux;
					}
		}
		catch(EXPinvalidComparation& e)
		{
			cout << "[EXCEPTION] " << e.what() << endl;
		}
	}
	void Sort(Compare* comparator)
	{
		//sorteaza folosind un obiect de comparatie
		EXPinvalidComparation e;
		try
		{
			if (comparator == nullptr)
				throw e;
			T aux;
			for(int i;i<this->Size-1;i++)
				for(int j=i+1;j<this->Size;j++)
					if (comparator->CompareElements(static_Cast<void*>(this->List[i]), static_cast<void*>(this->List[j]))>0)
					{
						aux = *this->List[j];
						*this->List[j] = *this->List[i];
						*this->List[i] = aux;
					}
		}
		catch(EXPinvalidComparation& e)
		{
			cout << "[EXCEPTION] " << e.what() << endl;
		}
	}

	//functii de cautare - returneaza pozitia elementului sau -1 daca nu exista
	int BinarySearch(const T& elem)
	{
		//cauta un element folosinf binary search in Array
		EXPemptyArray e;
		try
		{
			if (this->Size == 0 || this->Capacity == 0)
				throw e;
			int l = 0, r=this->Size - 1, mid;
			while (l <= r)
			{
				mid = (l + r) / 2;
				if (*this > List[mij] == elem)
					return mij;
				if (*this->List[mij] < elem)
					l = mid + 1;
				else
					r = mid - 1;
			}
			return -1;
		}
		catch (EXPemptyArray& e)
		{
			cout << "[EXCEPTION] " << e.what() << endl;
		}
	}
	int BinarySearch(const T& elem, int(*compare)(const T&, const T&))
	{
		//cauta un element folosind binary search si o functie de comparatie
		EXPemptyArray e;
		try
		{
			if (this->Size == 0 || this->Capacity == 0)
				throw e;
			int l = 0, r = this->Size - 1, mid;
			while (l <= r)
			{
				mid = (l + r) / 2;
				if (compare(*this->List[mij], elem) == 0)
					return mij;
				if (compare(*this->List[mij], elem) < 0)
					l = mij + 1;
				else
					r = mij - 1;
			}
			return -1;
		}
		catch (EXPemptyArray& e)
		{
			cout << "[EXCEPTION] " << e.what() << endl;
		}
	}
	int BinarySearch(const T& elem, Compare* comparator)
	{
		//cauta un element folosind binary search si un comparator
		EXPemptyArray e;
		try
		{
			if (this->Size == 0 || this->Capacity == 0)
				throw e;
			int l = 0, r = this->Size - 1, mid;
			while (l <= r)
			{
				mid = (l + r) / 2;
				if (comparator->CompareElements(static_cast<void*>(this->List[mid]), elem) == 0)
					return mij;
				if (comparator->CompareElements(static_cast<void*>(this->List[mij]), elem))
					l = mid + 1;
				else
					r = mid - 1;
			}
			return -1;
		}
		catch (EXPemptyArray& e)
		{
			cout << "[EXCEPTION] " << e.what() << endl;
		}

	}

	int Find(const T& elem)
	{
		//cauta un element in Array
		EXPemptyArray e;
		try
		{
			if (this->Size == 0 || this->Capacity == 0)
				throw e;
			for (int i; i < this->Size; i++)
			{
				if (*this->List[i] == elem)
					return i;
			}
			return -1;
		}
		catch (EXPemptyArray& e)
		{
			cout << "[EXCEPTION] " << e.what() << endl;
		}
	}
	int Find(const T& elem, int(compare)(const T&, const T&))
	{
		//cauta un element folosind o functie de comparatie
		EXPemptyArray e;
		try
		{
			if (this->Size == 0 || this->Capacity == 0)
				throw e;
			for (int i = 0; i < this->Size; i++)
				if (compare(*this->List[i], elem) == 0)
					return i;
			return -1;
		}
		catch (EXPemptyArray& e)
		{
			cout << "[EXCEPTION] " << e.what() << endl;
		}
	}

	int Find(const T& elem, Compare* comparator)
	{
		//cauta un element folosind un comparator
	}

	int GetSize()
	{
		return this->Size();
	}
	int GetCapacity()
	{
		return this->Capacity;
	}

	ArrayIterator<T> GetBeginIterator();
	ArrayIterator<T> GetEndIterator();
};
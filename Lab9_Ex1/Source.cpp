#include <iostream>

using namespace std;

template <typename K,typename V>
class Map
{
	struct MapCharacteristics
	{
		int index;
		K key;
		V value;
	};
public:
	//Constructor

	//Operator
	

	//Set
	void Set(V& val, K& k)
	{
		if (this->key == k)
		{
			this->value = val;
			this->index++;
		}
	}

	//Get
	bool Get(const K& key, V& value)
	{
		if (this->key != key)
			return false;
		else
		{
			;
		}
	}
	//Count
	//Clear
	//Delete
	//Includes
};





int main()
{
	Map<int, const char*> m; //structura ce contine key, value, index
	m[10] = "C++"; //operator pentru asta
	m[20] = "test";
	m[30] = "Poo";
	for (auto [key, value, index] : m) //structured binfing aici
	{
		printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
	}
	m[20] = "result";
	for (auto [key, value, index] : m)
	{
		printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
	}
	return 0;
}

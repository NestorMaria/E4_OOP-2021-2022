#include <iostream>

using namespace std;

template<typename K,typename V>
class Map
{
public:
	K key;
	V value;
	int index;
	
	void Set(V& value, const K& key)
	{
		m[key] = value;
	}

	bool Get(const K& key, V& value)
	{
		if (!m[key])
			return false;
		else
		{
			value = m[key];
			return true;
		}
	}

	int Count()
	{
		int cnt = 0;
		for (auto [key, value, index] : m)
			cnt++;
		return cnt;
	}

	void Clear();
	bool Delete(const K& key);
	bool Includes(const Map<K, V>& map);
};




int main()
{
	Map<int, const char*> m;
	m[10] = "C++";
	m[20] = "test";
	m[30] = "Poo";
	for (auto[key, value, index] : m)
	{
		printf("Index:%d, Key=%d, Value=%s\n", index, key, value);

	}
	m[20] = "result";
	for (auto[key, value, index] : m)
	{
		printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
	}
	return 0;
}

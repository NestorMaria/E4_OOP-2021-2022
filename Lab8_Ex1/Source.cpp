#include <map>
#include <string>
#include <queue>

#include <iostream>
using namespace std;


bool eq(const string& a, const string& b)
{
	if (b.size() != a.size())
		return false;
	for (int i = 0; i < a.size(); i++)
		if (tolower(a[i]) != tolower(b[i]))
			return false;
	return true;
}

int main()
{
	string s = "I bought an apple. Then I eat an apple. Apple is my favourite.";
	map<string, int>mp;
	
	auto position=s.find(" ");
	while (!s.empty() && position!=EOF)
	{
		position = s.find(" ");
		string aux = s.substr(0, position);
		auto it = mp.find(aux);
		if (it != mp.end())
			it->second++;
		mp.insert(pair<string, int>(aux, 1));
		s.erase(0, position+1);
	}

	for (auto it = mp.begin(); it != mp.end(); ++it)
		for (auto jt = mp.begin(); jt != mp.end(); ++jt)
		{
			if (eq(it->first, jt->first))
			{
				it->second++;
				mp.erase(jt);
			}
		}
	
	
	for (auto it = mp.begin(); it != mp.end(); ++it)
		cout << it->first << ' ' << it->second << endl;

	return 0;
}


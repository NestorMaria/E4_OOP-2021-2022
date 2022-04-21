#include <map>
#include <string>
#include <queue>
#include <vector>
#include <iostream>
using namespace std;


string TOLOWER(string a)
{
	for (char& c : a)
		c = tolower(c);
	return a;
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
		aux = TOLOWER(aux);


		auto it = mp.find(aux);
		if (it != mp.end())
			it->second++;
		mp.insert(pair<string, int>(aux, 1));
		s.erase(0, position+1);
	}


	
	for (auto it = mp.begin(); it != mp.end(); ++it)
		cout << it->first << ' ' << it->second << endl;

	
	return 0;
}


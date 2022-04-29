#include <map>
#include <string>
#include <queue>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("Phrase.txt");
string s, sep(" ,?!.");
map<string, int>ap;
typedef pair<string, int>si;

struct Comp
{
	bool operator()(si const& a, si const& b)
	{
		if (a.second != b.second)
			return a.second < b.second;
		else
			return a.first > b.first;
	}
};

priority_queue<si, vector<si>, Comp>C;

int main()
{
	getline(fin, s);
	fin.close();
	int cuv1 = s.find_first_of(sep);
	int ucuv = 0;
	while (cuv1 != string::npos)
	{
		if (cuv1 != ucuv)
		{
			string cuv = s.substr(ucuv, cuv1 - ucuv);
			for (auto& i : cuv)
			{
				if (i <= 'Z' && i >= 'A')
					i = i - 'A' - 'a';
			}
			ap[cuv]++;
		}
		ucuv = cuv1 + 1;
		cuv1 = s.find_first_of(sep, ucuv);
	}
	for (auto const& i : ap)
		C.push(make_pair(i.first, i.second));
	while (!C.empty())
	{
		cout << C.top().first << "=>" << C.top().second << endl;
		C.pop();
	}
	return 0;
}


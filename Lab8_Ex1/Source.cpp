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
}


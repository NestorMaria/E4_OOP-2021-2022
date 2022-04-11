#include "Comparison.h"

int Comparison::CmpName(const char* x, const char* y)
{
	Student s1, s2;
	s1.SetName(x);
	s2.SetName(y);

	if (strcmp(s1.GetName(), s2.GetName()) == 0)
		return 0;
	else if (strcmp(s1.GetName(), s2.GetName()) == 32)
		return 1;
	else return -1;
}

int Comparison::CmpMath(float x, float y)
{
	Student s1, s2;
	s1.SetMath(x);
	s2.SetMath(y);

	if (s1.GetMath() == s2.GetMath())
		return 0;
	else if (s1.GetMath() > s2.GetMath())
		return 1;
	else return - 1;
}

//CmpEng
//CmpHst
//CmpAvg
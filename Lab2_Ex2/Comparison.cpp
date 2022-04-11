#include "Comparison.h"

int Comparison::CmpName(Student s1,Student s2)
{
	
	if (strcmp(s1.GetName(), s2.GetName()) == 0)
		return 0;
	else if (strcmp(s1.GetName(), s2.GetName()) == 32)
		return 1;
	else return -1;
}

int Comparison::CmpMath(Student s1,Student s2)
{

	if (s1.GetMath() == s2.GetMath())
		return 0;
	else if (s1.GetMath() > s2.GetMath())
		return 1;
	else return - 1;
}

int Comparison::CmpEng(Student s1,Student s2)
{
	
	if (s1.GetEng() == s2.GetEng())
		return 0;
	else if (s1.GetEng() > s2.GetEng())
		return 1;
	else return -1;
}

int Comparison::CmpHst(Student s1, Student s2)
{

	if (s1.GetHst() == s2.GetHst())
		return 0;
	else if (s1.GetHst() > s2.GetHst())
		return 1;
	else return -1;
}

int Comparison::CmpAvg(Student s1,Student s2)
{
	if (s1.Avg() == s2.Avg())
		return 0;
	else if (s1.Avg() > s2.Avg())
		return 1;
	else return -1;
}
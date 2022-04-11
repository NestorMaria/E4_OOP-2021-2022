#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include <string.h>

class Comparison
{
public:
	int CmpName(Student s1,Student s2);
	int CmpMath(Student s1,Student s2);
	int CmpEng(Student s1,Student s2);
	int CmpHst(Student s1,Student s2);
	int CmpAvg(Student s1,Student s2);
};
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include <string.h>

class Comparison
{
public:
	int CmpName(const char* x, const char* y);
	int CmpMath(float x, float y);
	int CmpEng(float x, float y);
	int CmpHst(float x, float y);
	int CmpAvg(float x, float y);
};
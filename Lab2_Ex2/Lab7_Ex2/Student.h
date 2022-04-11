#pragma once
#include <iostream>

using namespace std;

class Student
{
private:
	const char* name;
	struct courses
	{
		float grade;
	};

public:
	void SetName(const char* name);
	const char* GetName();

	courses m,e,h;

	void SetMath(float grade);
	float GetMath();

	void SetEng(float grade);
	float GetEng();

	void SetHst(float grade);
	float GetHst();

	float Avg();
};
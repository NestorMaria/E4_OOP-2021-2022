#include "Student.h"

void Student::SetName(const char* nume)
{
	this->name = nume;
}

const char* Student::GetName()
{
	return this->name;
}

void Student::SetMath(float nota)
{
	m.grade = nota;
}

float Student::GetMath()
{
	return m.grade;
}
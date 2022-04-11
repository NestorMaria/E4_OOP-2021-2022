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
	this->m.grade = nota;
}

float Student::GetMath()
{
	return this->m.grade;
}

void Student::SetEng(float nota)
{
	this->e.grade = nota;
}

float Student::GetEng()
{
	return this->e.grade;
}

void Student::SetHst(float nota)
{
	this->h.grade = nota;
}

float Student::GetHst()
{
	return this->h.grade;
}

float Student::Avg()
{
	courses m, e, h;
	this->average = (this->m.grade + this->e.grade + this->h.grade) / 3;
	return this->average;
}
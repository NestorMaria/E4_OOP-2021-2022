#include "Student.h"
#include "Comparison.h"

int main()
{
	Student s1, s2, s3;
	Comparison a;

	s1.SetName("Viorel");
	s1.SetMath(8);
	s1.SetEng(9);
	s1.SetHst(5.5);

	s2.SetName("Maricica");
	s2.SetMath(6.7);
	s2.SetEng(9);
	s2.SetHst(10);

	s3.SetName("Maricica");

	cout << "[NAME1] s1 fata de s2: " << a.CmpName(s1, s2) << endl;
	cout << "[MATH] s1 fata de s2: " << a.CmpMath(s1, s2) << endl;
	cout << "[ENG] s1 fata de s2: " << a.CmpEng(s1, s2) << endl;
	cout << "[HST] s1 fata de s2: " << a.CmpHst(s1, s2) << endl;
	cout << "[AVG] s1 fata de s2: " << a.CmpAvg(s1, s2) << endl;
	cout << "[NAME2] s1 fata de s2: " << a.CmpName(s2, s3) << endl;

	return 0;
}
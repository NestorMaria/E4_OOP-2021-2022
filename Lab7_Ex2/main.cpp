#include "Header.h"

int main()
{
	Vector<int>my_vector;

	my_vector.Push(10);
	my_vector.Push(20);
	my_vector.Push(4);

	my_vector.Sort();
	cout << "Testing Sort(): ";
	my_vector.Print();

	cout << "Testing Pop(): " << my_vector.Pop() << endl;
	my_vector.Print();

	my_vector.Insert(14, 1);
	cout << "Testing Insert(): ";
	my_vector.Print();

	my_vector.Set(176, 1);
	cout << "Testing Set(): ";
	my_vector.Print();

	cout << "Testing Get(): " << my_vector.Get(2) << endl;;
	cout << "Testing Count(): " << my_vector.Count() << endl;;
	cout << "Testing FirstIndexOf(): " << my_vector.FirstIndexOf(4) << endl;;
	
	return 0;
}
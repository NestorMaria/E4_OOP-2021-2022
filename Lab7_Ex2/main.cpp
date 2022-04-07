#include "Header.h"

int main(int argc, const char* argv)
{
	AVector<int> my_vector;

	my_vector.Push(10);
	my_vector.Push(15);
	my_vector.Push(3);
	my_vector.Push(44);
	my_vector.Push(14);

	my_vector.Sort();
	
	cout << my_vector.Pop() << endl;

	cout << my_vector.FirstIndexOf(10);
	
	return 0;
}
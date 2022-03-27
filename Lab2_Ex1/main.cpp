#include "NumberList.h"

int main()
{
	NumberList n;
	
	n.Init();

	if (n.Add(2))
		if (n.Add(5))
			if (n.Add(3))
				n.Sort();

	n.Print();

	return 0;
}
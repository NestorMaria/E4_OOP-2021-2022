#include "Item.h"
#include "Food.h"
#include "Miscellaneous.h"
#include "ShoppingList.h"


int main()
{
	Food item1;
	item1.setName("meat");
	item1.setQuantity(1.5f);
	Miscellaneous item2;
	item2.setName("servetele");
	item2.setQuantity(3);
	ShoppingList L;
	L.addItems(&item1);
	L.addItems(&item2);
	L.printList();
	return 0;
}
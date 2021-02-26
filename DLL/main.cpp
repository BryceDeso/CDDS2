#include "List.h"

int main()
{
	List<int>* list = new List<int>();

	list->pushFront(1);
	list->insert(3, 0);
	list->insert(5, 1);
	list->pushBack(15);
	list->pushFront(10);
	list->contains(15);
	
	list->print();

	return 0;
};
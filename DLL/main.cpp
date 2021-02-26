#include "List.h"

int main()
{
	List<int>* list = new List<int>();

	list->pushFront(10);
	list->insert(5, 1);
	list->pushBack(15);
	list->contains(15);
	
	list->print();

	return 0;
};
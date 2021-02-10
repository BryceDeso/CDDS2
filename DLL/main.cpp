#include "List.h"

int main()
{
	List<int> list;

	list.pushFront(1);
	list.pushFront(2);
	list.pushFront(3);
	list.pushFront(4);
	list.pushFront(5);

	list.print();

	return 0;
};
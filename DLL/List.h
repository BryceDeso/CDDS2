#include "Iterator.h"

template<typename T>
class List
{
public:
	List();
	List(List<T>&);
	~List();
	void destroy();
	Iterator<T> begin();
	Iterator<T> end();
	bool contains(const T& object);
	void pushFront(const T& value);
	void pushBack(const T& value);
	bool insert(const T& value, int index);
	bool remove(const T& value);
	void print();
	void initalize();
	bool isEmpty();
	bool setIterator(Iterator<T>& iter, int index);
	int getLenght();
	List<T>& operator=(const List<T>& otherList);
	void sort(List<T>* list);

private:
	Node<T>* m_first;
	Node<T>* m_last;
	int m_nodeCount;
};

template<typename T>
inline List<T>::List()
{

}

template<typename T>
inline List<T>::List(List<T>& list)
{
	this = list;
}

template<typename T>
inline List<T>::~List()
{
	delete this;
}

template<typename T>
void List<T>::destroy()
{
	//Iterates for each node in the list.
	for (int i = 0; i < m_nodeCount; i++)
	{
		//deletes node at the index.
		delete m_nodeCount[i];
	}
}

template<typename T>
inline Iterator<T> List<T>::begin()
{
	//Sets tempIter to be m_first.
	Iterator<T> tempIter;
	tempIter.m_current = m_first->next;

	return tempIter;
}

template<typename T>
inline Iterator<T> List<T>::end()
{
	//Sets tempIter to be m_last;
	Iterator<T> tempIter = Iterator<T>(m_last);

	return tempIter;
}

template<typename T>
bool List<T>::contains(const T& value)
{
	Iterator<T> tempIter = begin();
	//Iterates for each node in the list.
	for (int i = 0; i < m_nodeCount; i++)
	{
		//If tempIter's current node's data is equal to value return true.
		if (tempIter.m_current->data == value)
		{
			return true;
		}
		//Moves iterator to next node.
		tempIter.operator++();
	}

	return false;
}

template<typename T>
void List<T>::pushFront(const T& value)
{
	Node<T>* node = new Node<T>(value);

	//Sets node's next to m_first then its previous to nullptr.
	node->next = m_first;
	node->previous = nullptr;

	//If m_first isnt eqaual to nullptr.
	if (m_first != nullptr)
	{
		//then set m_first's previous to node.
		m_first->previous = node;
	}

	//Set m_first to node then increment m_nodecount.
	m_first = node;
	m_nodeCount++;
}

template<typename T>
void List<T>::pushBack(const T& value)
{
	//Creates a new node.
	Node<T>* node = new Node<T>(value);

	//Sets the new nodes next to null.
	node->next = nullptr;
	//Seting the nodes previous to be m_last.
	node->previous = m_last;

	//if m_last isn't equal to nullptr.
	if (m_last != nullptr)
	{
		//Set m_lasts next to the new node.
		m_last->next = node;
	}

	//set m_last to the new node, then increment the node count.
	m_last = node;
	m_nodeCount++;
}

template<typename T>
bool List<T>::insert(const T& value, int index)
{
	Node<T>* node = &Node<T>(value);
	
	Iterator<T> tempIter = m_first;
	int i = 0;

	//Increments for the amount of the index.
	if(i == index)
	{
		//Then set node's next to be tempIter's currents next.
		node->next = tempIter.m_current->next;
		//Set node's previous to tempIter's current previous.
		node->previous = tempIter.m_current->previous;
		//Incremt node count.
		m_nodeCount++;
		return true;
	}
	//Moves iterator to next node.
	tempIter.operator++();

	return false;
}

template<typename T>
bool List<T>::remove(const T& value)
{
	Node<T>* node = m_first;
	
	//Iterates for the lenght of m_nodecount.
	for (int i = 0; i < m_nodeCount; i++)
	{
		//if node's next data is equal to value.
		if (node->next->data == value)
		{
			return true;
		}
	}
	return false;
}

template<typename T>
void List<T>::print()
{
	//Iterates through list.
	for (Iterator<int> iter = begin(); iter != end(); iter.operator++())
	{
		//if m_first or m_last is equal to nullptr.
		if (m_first != nullptr || m_last != nullptr)
		{
			//print iter.
			std::cout << *iter << std::endl;
			iter.operator++();
		}
	}
}

template<typename T>
void List<T>::initalize()
{
	m_first = nullptr;
	m_last = nullptr;
	m_nodeCount = 0;
}

template<typename T>
bool List<T>::isEmpty()
{
	//if m_nodecount is equal to zero return true.
	if (m_nodeCount == 0)
	{
		return true;
	}
	return false;
}

template<typename T>
bool List<T>::setIterator(Iterator<T>& iter, int index)
{
	iter = m_first;

	//while iter isnt equal to index
	while (iter != index)
	{
		//if(iter is equal to index, return true
		if (iter == index)
		{
			return true;
		}
		//Moves iterator to next node
		iter.operator++();
	}
	return false;
}

template<typename T>
int List<T>::getLenght()
{
	return m_nodeCount;
}

template<typename T>
List<T>& List<T>::operator=(const List<T>& otherlist)
{

}

	//Bubble sort.
template<typename T>
void List<T>::sort(List<T>* list)
{
	for (int i = 0; i < m_nodeCount; i++)
	{
		for (int j = m_nodeCount - 1; j > i; j--)
		{
			if (list[j] < list[j - 1])
			{
				T temp = list[j];
				list[j] = list[j - 1];
				list[j - 1] = temp;
			}
		}
	}
}
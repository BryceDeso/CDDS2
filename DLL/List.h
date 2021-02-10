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
	bool getData(Iterator<T>& iter, int index);
	int getLenght();
	List<T>& operator=(const List<T>& otherList);
	void sort();

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
inline List<T>::List(List<T>&)
{

}

template<typename T>
inline List<T>::~List()
{

}

template<typename T>
void List<T>::destroy()
{
	for (int i = 0; i < m_nodeCount; i++)
	{
		delete m_nodeCount[i];
	}
}

template<typename T>
inline Iterator<T> List<T>::begin()
{
	Iterator<T> iter = Iterator<T>(m_first);
	return iter;
}

template<typename T>
inline Iterator<T> List<T>::end()
{
	Iterator<T> iter = Iterator<T>(m_last->next);

	return iter;
}

template<typename T>
bool List<T>::contains(const T& value)
{
	for (int i = 0; i < m_nodeCount; i++)
	{
		if (Node<T>::m_current.data == value)
		{
			return true;
		}
		m_first++;
	}

	return false;
}

template<typename T>
void List<T>::pushFront(const T& value)
{
	Node<T>* node = new Node<T>(value);

	node->next = m_first;
	node->previous = nullptr;

	if (m_first != nullptr)
	{
		m_first->previous = node;
	}

	m_first = node;
	m_nodeCount++;
}

template<typename T>
void List<T>::pushBack(const T& value)
{
	Node<T>* node = new Node<T>(value);

	node->next = nullptr;
	node->previous = m_last;

	if (m_last != nullptr)
	{
		m_last->next = node;
	}

	m_last = node;
}

template<typename T>
bool List<T>::insert(const T& value, int index)
{
	return false;
}

template<typename T>
bool List<T>::remove(const T& value)
{

}

template<typename T>
void List<T>::print()
{
	for (Iterator<int> iter = begin(); iter != end();)
	{
		if (m_first == nullptr || m_last == nullptr)
		{

		}
		std::cout << *iter << std::endl;
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
	if (m_nodeCount == 0)
	{
		return true;
	}
	return false;
}

template<typename T>
bool List<T>::getData(Iterator<T>& iter, int index)
{
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

template<typename T>
void List<T>::sort()
{

}
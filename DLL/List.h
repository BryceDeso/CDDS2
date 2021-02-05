#include "Iterator.h"

template<typename T>
class List
{
public:
	List() == {};
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
	Node<T> m_first;
	Node<T> m_last;
	int m_nodeCount;
};

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

}

template<typename T>
Iterator<T> List<T>::begin()
{

}

template<typename T>
Iterator<T> List<T>::end()
{

}

template<typename T>
bool List<T>::contains(const T& value)
{

}

template<typename T>
void List<T>::pushFront(const T& value)
{

}

template<typename T>
void List<T>::pushBack(const T& value)
{

}

template<typename T>
bool List<T>::insert(const T& value, int index)
{

}

template<typename T>
bool List<T>::remove(const T& value)
{

}

template<typename T>
void List<T>::print()
{

}

template<typename T>
void List<T>::initalize()
{

}

template<typename T>
bool List<T>::isEmpty()
{

}

template<typename T>
bool List<T>::getData(Iterator<T>& iter, int index)
{

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
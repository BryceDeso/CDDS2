#include "Node.h"

template<typename T>
class Iterator
{
public:
	Iterator();
	Iterator(Node<T>* node);
	Iterator<T> operator++();
	Iterator<T> operator--();
	const bool operator==(const Iterator<T>& iter);
	const bool operator!=(const Iterator<T>& iter);
	T operator*();

private:
	Node<T> m_current;
};

template<typename T>
inline Iterator<T>::Iterator()
{
	
}

template<typename T>
inline Iterator<T>::Iterator(Node<T>* node)
{

}

template<typename T>
Iterator<T> Iterator<T>::operator++()
{
	m_current++ = Node<T>::next;
}

template<typename T>
Iterator<T> Iterator<T>::operator--()
{
	m_current-- = Node<T>::previous;
}

template<typename T>
const bool Iterator<T>::operator==(const Iterator<T>& iter)
{
	if (iter == m_current)
	{
		return true;
	}

	return false;
}

template<typename T>
const bool Iterator<T>::operator!=(const Iterator<T>& iter)
{
	if (iter != m_current)
	{
		return true;
	}

	return false;
}

template<typename T>
T Iterator<T>::operator*()
{
	
}
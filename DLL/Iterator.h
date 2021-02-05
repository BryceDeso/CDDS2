#include "Node.h"

template<typename T>
class Iterator
{
public:
	Iterator() == {};
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
inline Iterator<T>::Iterator(Node<T>* node)
{
	m_current = node;
}

template<typename T>
Iterator<T> Iterator<T>::operator++()
{
	m_current++;
}

template<typename T>
Iterator<T> Iterator<T>::operator--()
{
	m_current--;
}

template<typename T>
const bool Iterator<T>::operator==(const Iterator<T>& iter)
{
	
}

template<typename T>
const bool Iterator<T>::operator!=(const Iterator<T>& iter)
{

}

template<typename T>
T Iterator<T>::operator*()
{

}
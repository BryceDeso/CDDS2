#include "iostream"

template<typename T>
class Node
{
public:
	Node();
	Node(T value);
	Node<T>* next;
	Node<T>* previous;
	T data;

private:

};

template<typename T>
inline Node<T>::Node()
{
	
}

template<typename T>
inline Node<T>::Node(T value)
{
	next;
	data = value;
	previous;
}
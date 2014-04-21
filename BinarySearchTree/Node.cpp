#include <iostream>
#include "Node.h"

template <class T>
Node<T>::Node() :  left(NULL), right(NULL) {
    // Default constructor
}

template <class T>
Node<T>::Node(T value, Node<T>* l, Node<T>* r) : data(value), left(l), right(r) {
// Constructs a node with a value and child pointers
}

template<class T>
bool Node<T>::isLeaf()
{
    return (left == NULL) && (right == NULL);
}

#include <iostream>
#include "Node.h"

template <class T>
Node<T>::Node() :  link(NULL) {
    // Default constructor
}

template <class T>
Node<T>::Node(T value, Node *next) : data(value), link(next) {
// Constructs a node with a value and next link
}

// Accessor and Mutator methods follow
template <class T>
T Node<T>::getData() const {
    return data;
}

template <class T>
Node<T>* Node<T>::getLink( ) const {
    return link;
}

template <class T>
void Node<T>::setData(T value) {
    data = value;
}

template <class T>
void Node<T>::setLink(Node *next) {
    link = next;
}
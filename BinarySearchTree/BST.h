#ifndef BST_H
#define BST_H

#include "Node.h"

template<class T>
class BST
{

public:
    BST();
    ~BST();

    void insert(T item);
    void remove(T item);
    bool contains(T item);
    void inorder();
    int size();
    void removeAll();

private:
    Node<T>* root;

    void remove(Node<T>*& node, T item);
    void removeRoot(Node<T>*& root);
    Node<T>* removeMin(Node<T>*& node);

    bool contains(Node<T>* node, T item);
    int size(Node<T>* node);
    void insert(Node<T>* node, T item);
    void inorder(Node<T>* node);
    void removeAll(Node<T>* node);
};

#endif // BST_H

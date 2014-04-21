#ifndef NODE_H
#define NODE_H

template<class T>
class Node
{
    public:
        // Constructors to initialize a node
        Node();                      // Constructs a node with a 0 value and a NULL link
        Node(T value, Node<T>* left, Node<T>* right); // Constructs a node with a value and next link
        T data;
        Node *left;
        Node *right;
        bool isLeaf();
};


#endif // NODE_H

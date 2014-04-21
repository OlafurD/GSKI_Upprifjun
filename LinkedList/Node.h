#ifndef NODE_H
#define NODE_H

template<class T>
class Node
{
    public:
        // Constructors to initialize a node
        Node();                      // Constructs a node with a 0 value and a NULL link
        Node(T value, Node *next); // Constructs a node with a value and next link

        T getData() const;    // Retrieve value for this node
        Node* getLink() const;  // Retrieve next node in the list

        void setData(T value); // Use to modify the value stored in the list
        void setLink(Node* next); // Use to change the reference to the next node

    private:
        T data;
        Node *link;
};


#endif // NODE_H

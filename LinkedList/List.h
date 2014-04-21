#ifndef LIST_H
#define LIST_H
#include <iostream>
#include "Node.h"
using namespace std;

template<class T>
class List
{
    public:
        List();     // Constructor: creates an empty list
        ~List();    // Destructor

        int length(); // Returns the length of the list

        // Inserts a node with value the_number at the head of the list
        void headInsert(T data);

        // Inserts a node with value the_number at the end of the list
        void endInsert(T data);

        // Removes the first instance of a node with value the_number from the list
        void remove(T data);

        // Removes all the nodes in the list
        void removeAll();

        // Reverses the order of the nodes in the list
        void reverse();

        // A friend function for writing the contents of the list to an output stream
        template <class T1>
        friend ostream& operator <<(ostream& outs, const List<T1>& lis);

    private:
        Node<T>* head; // pointer to the head of the list
};

#endif // LIST_H
#ifndef SLIST_H
#define SLIST_H

#include "Node.h"

class Slist
{
public:
    Slist();
    // A constructor: Initializes the object to an empty list.

    ~Slist();
    // A destructor. Removes all the nodes from the list.
    NodePtr begin();
    // Returns the beginning of the list, a pointer to the first node

    void push_front(int theItem);
    // Adds theItem to the front of the list

    void insert_after(int pos, int theItem) throw (SlistException);
    // theItem is added to the position pos+1 in the list
    // The first element has position 0
    // Throws an instance of SlistException if pos is out of range

    void remove(int theItem) throw (SlistException);
    // Removes the first instance of theItem from the list
    // Throws an instance of SlistException if theItem is not found

private:
    NodePtr head; //Points to the head of the linked list.
    void removeAll(); // Removes all the nodes from the list

};

#endif // SLIST_H


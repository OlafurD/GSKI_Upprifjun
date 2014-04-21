//This is the interface for the class Slist,
//which is a class for a linked list of integers.
#ifndef NODE_H
#define Node_H
#include "slistexception.h"
using namespace std;

class Node {

public:
    Node(int theItem, Node* theLink) : data(theItem), link(theLink) {};
    ~Node() {};
    Node* next() {return link;};
    int data;
    Node* link;
};
typedef Node* NodePtr;

#endif

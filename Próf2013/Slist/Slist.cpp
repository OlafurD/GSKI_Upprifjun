#include "Slist.h"

Slist::Slist()
{
    head = NULL;
}

Slist::~Slist()
{
    removeAll();
}

NodePtr Slist::begin()
{
    return head;
}

void Slist::push_front(int theItem)
{
    NodePtr node = new Node(theItem, head);
    head = node;
}

void Slist::insert_after(int pos, int theItem) throw (SlistException)
{
    if(pos < 0 || head == NULL)
        throw SlistException(" index out of range");

    int counter = 0;
    NodePtr iter = head;

    while(counter < pos)
    {
        if(iter->link == NULL)
            throw SlistException("Index out of range ");

        counter++;
        iter = iter->link;
    }

    NodePtr node = new Node(theItem, iter->link);
    iter->link = node;
}

void Slist::remove(int theItem) throw (SlistException)
{
    if(head == NULL)
        throw SlistException("list is empty");

    if(head->data == theItem)
    {
        NodePtr tmp = head;
        head = head->link;
        delete tmp;
    }

    else
    {
        NodePtr before = head, toRemove = head->link;
        while(toRemove != NULL && toRemove->data != theItem)
        {
            toRemove = toRemove->link;
            before = before->link;
        }

        if(toRemove == NULL)
            throw SlistException("item does not exist");

        before->link = toRemove->link;
        delete toRemove;
    }
}

void Slist::removeAll()
{
    while(head != NULL)
    {
        NodePtr tmp = head;
        head = head->link;
        delete tmp;
    }
}

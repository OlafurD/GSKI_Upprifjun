#include "Bag.h"

using namespace std;

template<class T>
Bag<T>::Bag() : list<T>() {}

template<class T>
int Bag<T>::count(T item)
{
    typename list<T>::iterator it = this->begin();
    int count = 0;


    for(; it != this->end() ; it++)
    {
        if(*it == item)
            count++;
    }

    return count;
}

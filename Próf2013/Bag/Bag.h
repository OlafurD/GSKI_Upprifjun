#ifndef BAG_H
#define BAG_H


#include <list>
using namespace std;

template<class T>
class Bag : public list<T>
{
public:
    Bag();
    int count(T item);
};

#endif // BAG_H

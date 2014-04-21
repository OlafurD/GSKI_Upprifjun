#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include <string>
using namespace std;

class Dog : public Animal
{
public:
    string sound() {return "Woof!";}
};



#endif // DOG_H

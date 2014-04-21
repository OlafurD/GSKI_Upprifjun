#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

using namespace std;

class Animal
{
public:
    virtual string sound() {return "I don't have no sound";}
};


#endif // ANIMAL_H

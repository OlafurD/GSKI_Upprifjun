#include <iostream>
#include "Dog.h"

using namespace std;

void makeSound(Animal& animal)
{
    cout << animal.sound();
}


int main()
{
    Dog dog;
    Animal animal = dog;
    makeSound(dog);
}

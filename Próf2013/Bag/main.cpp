#include <iostream>
#include "bag.cpp"

using namespace std;

int main()
{
     Bag<int> myBag;
     myBag.push_back(1);
     myBag.push_back(2);
     myBag.push_back(1);
     myBag.push_back(3);
     myBag.push_back(3);
     myBag.push_back(4);
     myBag.push_back(3);

     for (int i=1; i<=4; i++)
     {
         cout << i << " appears " << myBag.count(i) <<
         " times in the bag" << endl;
     }
     return 0;
}

#include <iostream>
#include "Slist.h"

using namespace std;

int main()
{
    Slist myList;

    myList.push_front(3);
    myList.push_front(1);
    myList.push_front(0);

    myList.insert_after(1,2);
    myList.insert_after(3,4);
    myList.remove(3);

    for(NodePtr node = myList.begin() ; node != NULL ; node = node->link)
    {
        cout << node->data << endl;
    }

    try
    {
        myList.remove(7);
    }

    catch(SlistException ex)
    {
        cout << ex.getMessage() << endl;
    }

    return 0;
}

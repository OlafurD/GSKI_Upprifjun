#include <iostream>
using namespace std;
const int ARRAY_SIZE = 20;

bool search(int a[], int start, int finalIndex, int key, int& location)
{
    if(start > finalIndex)
        return false;

    int mid = (start + finalIndex) / 2;
    if(a[mid] == key)
    {
        location = mid;
        return true;
    }

    else if(key < a[mid])
        return search(a, start, mid - 1, key, location);

    else // key > a[mid]
        return search(a, mid + 1, finalIndex, key, location);

}
int main( )
{
     int a[ARRAY_SIZE] =  {1,4,9,12,14,16,18,22,25,29,32,36,39,45,53,59,61,66,70,73};
     const int final_index = ARRAY_SIZE - 1;

     int key, location;
     bool found;

     cout << "Enter number to be located: ";
     cin >> key;
     found = search(a, 0, final_index, key, location);

     if (found)
     cout << key << " is in index location " << location << endl;
     else
     cout << key << " is not in the array." << endl;

     return 0;
}


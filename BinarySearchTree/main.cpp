#include <iostream>
#include "BST.cpp"

using namespace std;



int main()
{
    BST<int> tree;
    tree.insert(5);
    tree.insert(4);
    tree.insert(10);
    tree.insert(1);
    tree.insert(3);
    tree.insert(11);
    tree.insert(15);
    tree.insert(17);

    cout << "after inserting: " << endl;
    tree.inorder();
    tree.remove(4);
    tree.remove(1);
    tree.remove(10);
    tree.remove(20);

    cout << endl << "after removing: " << endl;

    tree.inorder();

}

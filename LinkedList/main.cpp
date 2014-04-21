#include <iostream>
#include <string>
#include "List.cpp"
#include "Node.cpp"

using namespace std;

int main()
{
	List<int> list;
	list.headInsert(1);
	list.headInsert(2);
	list.headInsert(3);
	list.endInsert(5);
	list.endInsert(6);

	cout << "list now contains: " << endl;
	cout << list << endl;

	List<string> list1;
	list1.headInsert("banana");
	list1.headInsert("coke");
	list1.headInsert("pepsi");

	cout << "the list of strings: " << endl;
	cout << list1 << endl;

	list1.reverse();
	cout << "after reversing: " << endl;
	cout << list1 << endl;
	
	return 0;
}

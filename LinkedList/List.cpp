#include "List.h"

template<class T>
List<T>::List()
{
	head = NULL;
}

template<class T>
List<T>::~List()
{
	removeAll();
}

template<class T>
int List<T>::length()
{

	int count = 0;

	for(Node<T>* iter = head ; iter != NULL ; iter = iter->getLink())
	{
		count++;
	}

	return count;
}

template<class T>
void List<T>::headInsert(T data)
{
	Node<T>* node = new Node<T>(data, head);
	head = node;
}

template<class T>
void List<T>::endInsert(T data)
{
	if(head == NULL)
	{
		headInsert(data);
		return;
	}

	Node<T>* iter;
	for(iter = head ; iter->getLink() != NULL ; iter = iter->getLink())
	{

	}

	iter->setLink(new Node<T>(data, NULL));
}

template<class T>
void List<T>::remove(T data)
{
	if(head == NULL)
		return;

	if(head->getData() == data)
	{
		Node<T>* tmp = head;
		head = head->getLink();
		delete tmp;
	}

	else
	{
		Node<T>* iter = head;
		Node<T>* toRemove = head->getLink();

		while(toRemove != NULL)
		{
			if(toRemove->getData() == data)
			{
				iter->setLink(toRemove->getLink());
				delete toRemove;
				return;
			}

			iter = toRemove;
			toRemove = toRemove->getLink();
		}
	}

}

template<class T>
void List<T>::removeAll()
{
	Node<T>* tmp;	

	while(head != NULL)
	{
		tmp = head;
		head = head->getLink();

		delete tmp; 
		tmp = NULL;
	}
}

template<class T>
void List<T>::reverse()
{
	if(head == NULL)
		return;

	else if(head->getLink() == NULL)
		return;

	Node<T>* last = head;
	Node<T>* middle = head->getLink();
	Node<T>* forward = middle->getLink();

	last->setLink(NULL);

	while(forward->getLink() !=  NULL)
	{
		middle->setLink(last);
		last = middle;
		middle = forward;
		forward = forward->getLink();
	}
	forward->setLink(middle);
	middle->setLink(last);
	head = forward;
}

template<class T1>
ostream& operator <<(ostream& outs, const List<T1>& lis)
{
	for(Node<T1>* iter = lis.head ; iter != NULL ; iter = iter->getLink())
	{
		outs << iter->getData() << " ";
	}

	outs << endl;
	return outs;
}

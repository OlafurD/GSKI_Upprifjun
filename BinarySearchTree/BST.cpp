#include "BST.h"
#include "Node.cpp"
#include <iostream>

using namespace std;

template<class T>
BST<T>::BST()
{
    root = NULL;
}

template<class T>
BST<T>::~BST()
{
    removeAll();
}

template<class T>
void BST<T>::insert(T item)
{
    if(root == NULL)
    {
        root = new Node<T>(item, NULL, NULL);
        return;
    }

    insert(root, item);
}

template<class T>
void BST<T>::insert(Node<T>* node, T item)
{
    if(node == NULL)
        return;

    if(item < node->data)
    {
        if(node->left == NULL)
        {
            node->left = new Node<T>(item, NULL, NULL);
        }

        else
        {
            insert(node->left, item);
        }
    }

    else if(item > node->data)
    {
        if(node->right == NULL)
        {
            node->right = new Node<T>(item, NULL, NULL);
        }

        else
        {
            insert(node->right, item);
        }
    }

}


template<class T>
void BST<T>::remove(T item)
{
    remove(root, item);
}

template<class T>
void BST<T>::remove(Node<T>*& node, T item) // recursively search for the item
{
    if(node == NULL)
		return;

    else if(node->data == item)
		removeRoot(node);

    else if(item < node->data)
		remove(node->left, item);

	else
        remove(node->right, item);

}

template<class T>
void BST<T>::removeRoot(Node<T>*& root)
{
	Node<T>* succ;
	if(root->isLeaf()) // case 1
    {
		delete root;
		root = NULL;
	}
	else if(root->left == NULL) //case 2: node has one child
    {
		succ = root->right;
		delete root;
		root = succ;
	}
	else if(root->right == NULL)
	{
		succ = root->left;
		delete root;
		root = succ;
	}
	else // case 3: node has two children. Find the inorder successor, copy its value and delete it
    {
		Node<T>* newRoot = removeMin(root->right);
		newRoot->left = root->left;
		newRoot->right = root->right;
		delete root;
		root = newRoot;
	}
}

template<class T>
Node<T>* BST<T>::removeMin(Node<T>*& node)
{
    if(node->left == NULL)
    {
		Node<T>* old_node = node;
		node = node->right;
		return old_node;
	}

	else
    {
		return removeMin(node->left);
	}
}

template<class T>
bool BST<T>::contains(T item)
{
    return contains(root, item);
}

template<class T>
bool BST<T>::contains(Node<T>* node, T item)
{
    if(node == NULL)
        return false;

    if(item < node->data)
        return contains(node->left, item);

    else if(item > node->data)
        return contains(node->right, item);

    else // item == node->data
        return true;
}

template<class T>
void BST<T>::inorder()
{
    inorder(root);
}

template<class T>
void BST<T>::inorder(Node<T>* node)
{
    if(node == NULL)
        return;

    if(node->isLeaf())
        cout << node->data << "  ";

    else
    {
        inorder(node->left);
        cout << node->data << "  ";
        inorder(node->right);
    }
}

template<class T>
void BST<T>::removeAll()
{

}

template<class T>
void BST<T>::removeAll(Node<T>* node)
{
    if(node == NULL)
        return;

    if(node->isLeaf())
        delete node;

    else
    {
        removeAll(node->left);
        removeAll(node->right);
        delete node;
    }
}

 template<class T>
 int BST<T>::size()
 {
     return size(root);
 }

 template<class T>
 int BST<T>::size(Node<T>* node)
 {
     if(node == NULL)
        return 0;

     else if(node->isLeaf())
        return 1;

     else
        return 1 + size(node->left) + size(node->right);
 }

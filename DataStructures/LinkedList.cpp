#include "LinkedList.h"

// function that insert a new node with the given value at the head of the list
void addNewNodeToHead(Node** head, unsigned int value)
{
	Node* newNode = new Node;
	newNode-> _value = value; //_ is covention to save varibles in struct
	newNode->_next = *head;
	*head = newNode;
}
// function that removes the node at the head of the list and returns its value
unsigned int removeFromHead(Node** head)
{
	if (head == nullptr || *head == nullptr) //if theres peoblem with pointer or empty list
	{
		return 0; //return 0 if empty
	}
	Node* temp = *head; 
	unsigned int removedValue = temp->_value;
	*head = (*head)->_next;
	delete temp;
	return removedValue;
}

// function that frees all the nodes in the list
void freeList(Node** head)
{
	if (head == nullptr)
	{
		return;
	}

	Node* current = *head;
	while (current != nullptr)
	{
		Node* temp = current;
		current = current->_next;
		delete temp;
	}
	*head = nullptr;
}
#ifndef LINKED_LIST_H
#define LINKED_LIST_H


typedef struct Node
{
	unsigned int _value;
	struct Node* _next;
} Node;

// function that insert a new node with the given value at the head of the list
void addNewNodeToHead(Node** head, unsigned int value);

// function that removes the node at the head of the list and returns its value
unsigned int removeFromHead(Node** head);

// function that frees all the nodes in the list
void freeList(Node** head);

#endif // LINKED_LIST_H
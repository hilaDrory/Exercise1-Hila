#include <iostream>
#include "LinkedList.h"

int main()
{
    Node* head = nullptr;

    //add members
    std::cout << "adding 10 to head" << std::endl;
    addNewNodeToHead(&head, 10);

    std::cout << "adding 20 to head" << std::endl;
    addNewNodeToHead(&head, 20);

    std::cout << "adding 30 to head" << std::endl;
    addNewNodeToHead(&head, 30);

	//print the list members
    std::cout << "\ncurrent list content: ";
    Node* current = head;
    while (current != nullptr)
    {
        std::cout << current->_value << "  ";
        current = current->_next;
    }
    std::cout << "nullptr\n" << std::endl;

    // remove member from the list
    unsigned int removed = removeFromHead(&head);
    std::cout << "Removed element: " << removed << std::endl;

	// clean memory
    freeList(&head);

    return 0;
}
#include "LinkedList.h"
#include <cassert>

void testLinkedList() 
{
    LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);
    list.append(0); 

    
    list.pointerJump();

    
    Node* current = list.head;
    while (current) 
    {
        assert(current->next == list.tail);
        current = current->next;
    }

    list.display();
}

int main() 
{
    testLinkedList();
    std::cout << "Tests passed!" << std::endl;
    return 0;
}

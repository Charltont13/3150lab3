#include "LinkedList.h"
#include <iostream>

Node::Node(int val) : data(val), next(nullptr) {}

LinkedList::LinkedList() : head(nullptr), tail(nullptr) {}

LinkedList::~LinkedList() 
{
    Node* current = head;
    while (current != nullptr) 
    {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

void LinkedList::append(int val) 
{
    Node* newNode = new Node(val);
    if (!head) 
    {
        head = newNode;
        tail = newNode;
    } 
    else 
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void LinkedList::pointerJump() 
{
    if (!head) 
    {
        return;
    }

    Node* lastNode = tail;
    Node* current = head;
    while (current) 
    {
        current->next = lastNode;
        current = current->next;
    }
}

void LinkedList::display() 
{
    Node* current = head;
    while (current) 
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

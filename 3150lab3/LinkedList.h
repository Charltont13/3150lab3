#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node 
{
public:
    int data;
    Node* next;

    Node(int val);
};

class LinkedList 
{
private:
    Node* head;
    Node* tail;

public:
    LinkedList() : head(nullptr), tail(nullptr) {}

    ~LinkedList();

    void append(int val);

    void pointerJump();

    void display();
};

#endif // LINKEDLIST_H

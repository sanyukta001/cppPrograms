#include "ll.h"
using namespace std;

Node::Node()
{
    this->next = NULL;
}
Node::Node(item value)
{
    this->data = value;
    this->next = NULL;
}
LinkedList::LinkedList()
{
    this->head = NULL;
}

void LinkedList::append(item value)
{
    Node* newnode =new Node(value);
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    Node* current = head;
    while(current->next != NULL)
    {
        current = current->next;
    }
    current->next = newnode;
}
void LinkedList:: display()
{
    Node* current = head;
    while(current != NULL)
    {
        cout<<current->data<<" ";
        current = current->next;
    }
    cout<<endl;
}
#include<iostream>
using namespace std;
#define item int
class LinkedList;
class Node
{
    item data;
    Node* next;
    public:
        Node();
        Node(item value);
        friend LinkedList;
};

class LinkedList
{
    Node* head;
    public:
        LinkedList();
        void append(item value);
        void display(); 
        friend Node;
};
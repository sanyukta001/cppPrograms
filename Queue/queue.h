#include <iostream>
using namespace std;
class Queue
{
    int front;
    int rear;
    int size;
    int* arr;
    public:
        Queue(int s);
        int isEmpty();
        int isFull();
        void enqueue(int val);
        void dequeue();
        void display();
};
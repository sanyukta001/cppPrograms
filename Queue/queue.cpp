#include "queue.h"
Queue::Queue(int s)
{
    this->front = -1;
    this->rear = -1;
    this->size = s;
    arr = new int[s];
}
int Queue::isEmpty()
{
    if(this->front - this->rear == 1)
    {
        this->front = -1;
        this->rear = -1;
    }
    if(this->front == -1 && this->rear == -1)
        return 1;
    else
        return 0;
}
int Queue::isFull()
{
    if(this->rear == this->size -1)
        return 1;
    return 0;
}
void Queue::enqueue( int val)
{
    if(isFull())
    {
        cout<<"Line is full"<<endl;
        return;
    }
    if(isEmpty())
    {
        this->front++;
        this->rear++;
        this->arr[this->rear] = val;
    }
    else
    {
        this->arr[++this->rear] = val;
    }
}
void Queue::dequeue()
{
    if(isEmpty())
    {
        cout<<"Line is Empty"<<endl;
        return;
    }
    int x = this->arr[this->front];
    this->front++;
    cout<<"Deleted element is "<<x<<endl;
}
void Queue::display()
{
    for (int i = this->front; i <= this->rear; i++)
    {
        cout<<this->arr[i]<<" ";
    }
    cout<<endl;
}
#include "stack.h"
Stack::Stack()
{
    this->size = 0 ;
    this->top = -1;
}
void Stack::init(int max)
{
    this->top = -1;
    this->size = max;
    arr = new item [this->size];
}
void Stack::push(int value)
{
    if(this->top == this->size -1)
    {
        cout<<"Stack Overflow"<<endl;
        return;
    }
    arr[++(this->top)] = value;
}
item Stack::pop()
{
    if(top == -1)
    {
        cout<<"Stack Underflow"<<endl;
        return -99999;
    }
    item x = this->arr[this->top];
    this->top--;
    return x;
}
void Stack::display()
{
    if(this->top == -1)
    {
        cout<<"Stack Underflow"<<endl;
        return;
    }
    for(int i = 0; i <= this->top; i++)
        cout<<this->arr[i]<<" ";
    cout<<endl;
}
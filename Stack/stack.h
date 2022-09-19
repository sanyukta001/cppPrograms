#include <iostream>
using namespace std;
#define item int
class Stack
{
    int size;
    int top;
    item* arr;
    public:
        Stack();
        void init(int max);
        void push(int value);
        item pop();
        void display();
};
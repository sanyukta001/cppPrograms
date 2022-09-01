#include <iostream>
using namespace std;

class Array
{
    int* arr;
    int size;

    public:
        Array();
        Array(int size);
        void take_input();
        void display();
        Array add(Array temp);
};
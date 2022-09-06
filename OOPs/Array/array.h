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
        Array operator+(Array ob);
        Array operator-(Array ob);
        Array operator*(Array ob);
        friend ostream& operator<<(ostream& out, const Array& ob);
        friend istream& operator>>(istream& in, const Array& ob);
};
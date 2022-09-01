#include <iostream>
using namespace std;

class Matrix
{
    int** arr;
    int c_size;
    int r_size;

    public:
        Matrix();
        Matrix(int r,int c);
        void take_input();
        void display();
        Matrix add_matrix(Matrix);

};
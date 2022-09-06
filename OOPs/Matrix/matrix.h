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
        Matrix operator+(Matrix ob);
        Matrix operator-(Matrix ob);
        Matrix operator*(Matrix ob);
        friend ostream& operator<<(ostream& out, const Matrix ob);
        friend istream& operator>>(istream& in, const Matrix ob);
        Matrix add_matrix(Matrix);

};
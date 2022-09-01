#include "matrix.h"

Matrix::Matrix(int r,int c)
{
    r_size = r;
    c_size = c;
    arr = (int**)malloc(sizeof(int)*r_size);
    for (int i = 0; i < r_size; i++)
    {
        *(arr+i) = (int*)malloc(sizeof(int)*c_size);
    }
}

void Matrix::take_input()
{
    cout<<"Enter the elements"<<endl;
    for (int i = 0; i < r_size; i++)
    {
        for (int j = 0; j < c_size; j++)
        {
            cin>>arr[i][j]; 
        } 
    }
}

Matrix Matrix::add_matrix(Matrix temp)
{
    Matrix res(this->r_size, this->c_size);
    for (int i = 0; i < r_size; i++)
    {
        for (int j = 0; j < c_size; j++)
        {
            res.arr[i][j] = this->arr[i][j] + temp.arr[i][j];
        }
    }
    return res;
}

void Matrix::display()
{
    for (int i = 0; i < r_size; i++)
    {
        for (int j = 0; j < c_size; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
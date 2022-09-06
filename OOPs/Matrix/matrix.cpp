#include "matrix.h"

Matrix::Matrix(int r,int c)
{
    this->r_size = r;
    this->c_size = c;
    this->arr = new int*[this->r_size];
    for (int i = 0; i < this->r_size; i++)
        this->arr[i] = new int[this->c_size];
    //arr = (int**)malloc(sizeof(int)*r_size);
    // for (int i = 0; i < r_size; i++)
    // {
    //     *(arr+i) = (int*)malloc(sizeof(int)*c_size);
    // }
}

// void Matrix::take_input()
// {
//     cout<<"Enter the elements"<<endl;
//     for (int i = 0; i < r_size; i++)
//     {
//         for (int j = 0; j < c_size; j++)
//         {
//             cin>>arr[i][j]; 
//         } 
//     }
// }

// Matrix Matrix::add_matrix(Matrix temp)
// {
//     Matrix res(this->r_size, this->c_size);
//     for (int i = 0; i < r_size; i++)
//     {
//         for (int j = 0; j < c_size; j++)
//         {
//             res.arr[i][j] = this->arr[i][j] + temp.arr[i][j];
//         }
//     }
//     return res;
// }

// void Matrix::display()
// {
//     for (int i = 0; i < r_size; i++)
//     {
//         for (int j = 0; j < c_size; j++)
//         {
//             cout<<this->arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

istream& operator>>(istream& in, const Matrix ob)
{
    for (int i = 0; i < ob.r_size; i++)
    {
        for (int j = 0; j < ob.c_size; j++)
        {
            in>>ob.arr[i][j];  
        }
    }
    return in;
}

ostream& operator<<(ostream& out, const Matrix ob)
{
    out<<"The array is"<<endl;
    for (int i = 0; i < ob.r_size; i++)
    {
        for (int j = 0; j < ob.c_size; j++)
        {
            out<<ob.arr[i][j]<<" ";  
        }
        out<<endl;
    }
    return out;
}

Matrix Matrix:: operator+(Matrix ob)
{
    Matrix res(ob.r_size, ob.c_size);
    for (int i = 0; i < ob.r_size; i++)
    {
        for (int j = 0; j < ob.c_size; j++)
        {
            res.arr[i][j] = this->arr[i][j] + ob.arr[i][j];
        }
    }
    return res;   
}

Matrix Matrix::operator-(Matrix ob)
{
    Matrix res(ob.r_size, ob.c_size);
    for (int i = 0; i < ob.r_size; i++)
    {
        for (int j = 0; j < ob.c_size; j++)
        {
            res.arr[i][j] = this->arr[i][j] - ob.arr[i][j];
        }
    }
    return res;
}

Matrix Matrix::operator*(Matrix ob)
{
    Matrix res(ob.r_size, ob.c_size);
    for (int i = 0; i < ob.r_size; i++)
    {
        for (int j = 0; j < ob.c_size; j++)
        {
            int sum = 0;
            for (int k = 0; k < ob.c_size; k++)
            {
                sum += this->arr[j][k] * ob.arr[k][i];
            }
            res.arr[i][j] = sum; 
        }
    }
    return res;
}
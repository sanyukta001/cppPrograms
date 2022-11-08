// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class Matrix
// {
//     int row,column;
//     //vector<vector<int>> ar;
//     int* arr;
//     public:
//         Matrix();
//         Matrix(int ,int );
//         void input();
//         int& operator[](int c);
//         void display();
// };

// Matrix::Matrix()
// {
//     row = 0;
//     column = 0;
// }

// Matrix::Matrix(int r, int c)
// {
//     row = r;
//     column = c;
//     arr = new int [row*column];
// }

// int& Matrix:: operator[](int r)
// {
//     if(r >= row*column)
//     {
//         cout<<"OUT OF BOUND"<<endl;
//         exit(0);
//     }
//     return arr[r];
// }

// void Matrix:: display()
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             cout<<this->arr[i*column+j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int x,y;
//     cout<<"Enter the row"<<endl;
//     cin>>x;
//     cout<<"Enter the column"<<endl;
//     cin>>y;
//     int k = 1;
//     Matrix m(x,y);
//     for (int i = 0; i < x; i++)
//     {
//         for (int j = 0; j < y; j++)
//         {
//             m[i*y+j] = k++;
//         }
//     }
//     m.display();
// }



//............/////////
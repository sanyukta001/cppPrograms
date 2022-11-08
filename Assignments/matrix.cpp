#include <iostream>
using namespace std;
class matrix
{
    int **ar;
    int m,n;
    public:
        matrix();
        matrix(int,int);
        void input();
        matrix operator+(matrix);
        matrix operator*(matrix);
        matrix operator/(matrix);
        void display();
};

matrix::matrix()
{
    m = 0;
    n = 0;
}

matrix::matrix(int a, int b)
{
    m = a;
    n = b;
    ar = new int*[m];
    for (int i = 0; i < m; i++)
        ar[i] = new int[n];
}

void matrix:: input()
{
    cout<<"Enter the elements"<<endl;
    for(int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin>>ar[i][j];
}

matrix matrix::operator+(matrix ob)
{
    if(this->n != ob.n || this->m != ob.m)
    {
        matrix result;
        return result;
    }
    matrix res(ob.m,ob.n);
    for (int i = 0; i < ob.m; i++)
        for (int j = 0; j < ob.n; j++)
            res.ar[i][j] = this->ar[i][j] + ob.ar[i][j];
    return res;
}

matrix matrix::operator*(matrix ob)
{
    if(this->n != ob.m)
    {
        matrix result;
        return result;
    }
    matrix res(this->m, ob.n);
    for (int i = 0; i < this->m; i++)
    {
        for (int j = 0; j < ob.n; j++)
        {
            int x = 0;
            for (int k = 0; k < ob.n; k++)
            {
                x += this->ar[i][k] * ob.ar[k][i];
            }
            res.ar[i][j] = x;
        }
    }
    return res;
}

matrix matrix::operator/(matrix ob)
{
    for (int i = 0; i < this->m; i++)
        for (int j = 0; j < this->n; j++)
            this->ar[i][j] = ob.ar[j][i];
    return *this;
}

void matrix::display()
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout<<ar[i][j]<<" ";
        cout<<endl;
    }
}

int main()
{
    int m1,n1,m2,n2;
    cout<<"Enter the row and column of first matrix"<<endl;
    cin>>m1>>n1;
    cout<<"Enter the row and column of second matrix"<<endl;
    cin>>m2>>n2;
    matrix ob(m1,n1);
    matrix ob1(m2,n2);
    ob.input();
    ob1.input();
    matrix res1 = ob + ob1;
    cout<<"Addition"<<endl;
    res1.display();
    matrix res2 = ob * ob1;
    cout<<"Multiply"<<endl;
    res2.display();
    matrix res3(m1,n1);
    res3 = res3 / ob;
    cout<<"transpose of first array"<<endl;
    res3.display();
    matrix res4(m2,n2);
    res4 = res4 / ob;
    cout<<"transpose of second array"<<endl;
    res4.display();

    return 0;
}
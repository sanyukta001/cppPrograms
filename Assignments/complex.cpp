#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
        Complex();
        Complex(int,int);
        void input();
        Complex operator+(Complex&);
        Complex operator-(Complex&);
        Complex operator*(Complex&);
        int operator==(Complex&);
        friend ostream& operator<<(ostream&,const Complex);
        friend istream& operator>>(istream&,Complex&);
        void display();
};
Complex::Complex()
{
    real = 0;
    img = 0;
}
Complex::Complex(int a,int b)
{
    real = a;
    img = b;
}
void Complex::input()
{
    cin>>(*this);
}
ostream& operator<<(ostream& out,const Complex ob)
{
    out<<"The complex number is:"<<endl;
    out<<ob.real<<"+"<<ob.img<<"i"<<endl;
    return out;
}
istream& operator>>(istream& in, Complex& ob)
{
    in>>ob.real>>ob.img;
    return in;
}
void Complex::display()
{
    cout<<(*this);
}
Complex Complex::operator+(Complex& ob)
{
    Complex res;
    res.img = this->img + ob.img;
    res.real = this->real + ob.real;
    return res;
}
Complex Complex::operator-(Complex& ob)
{
    Complex res;
    res.real = this->real - ob.real;
    res.img = this->img - ob.img;
    return res;
}
Complex Complex::operator*(Complex& ob)
{
    Complex res;
    res.real = this->real*ob.real - this->img*ob.img;
    res.img = this->real*ob.img + this->img*ob.real;
    return res;
}
int Complex::operator==(Complex& ob)
{
    if(this->img == ob.img && this->real == ob.real)
        return 1;
    else 
        return 0;
}
int main()
{
    Complex ob;
    Complex ob1;
    cout<<"Enter real and imaginary "<<endl;
    ob.input();
    cout<<"Enter real and imaginary "<<endl;
    ob1.input();
    Complex res1,res2,res3;
    res1 = ob + ob1;
    res2 = ob - ob1;
    res3 = ob * ob1;
    cout<<"After addition"<<endl;
    res1.display();
    cout<<"After substraction"<<endl;
    res2.display();
    cout<<"After multiplication"<<endl;
    res3.display();
    if(ob == ob1)
        cout<<"Equal"<<endl;
    else
        cout<<"Not equal"<<endl;
    return 0;
}

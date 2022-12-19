#include <iostream>
using namespace std;
class fractions
{
    int numerator, denomenator;
    public:
        fractions();//default constructor
        fractions(int,int);//parameterized constructor
        fractions operator+(fractions);//overloading +
        fractions operator-(fractions);//overloading -
        fractions operator*(fractions);//overloading *
        void operator==(fractions);//overload ==
        void input();
        void display();
        void minimise();
};
fractions::fractions()
{
    numerator = 0;
    denomenator = 0;
}
fractions::fractions(int a, int b)
{
    numerator = a;
    denomenator = b;
}
fractions fractions:: operator+(fractions ob)
{
    fractions res;
    res.denomenator = denomenator*(ob.denomenator);
    res.numerator = (numerator*ob.denomenator)+(ob.numerator*denomenator);
    return res;
}
fractions fractions:: operator-(fractions ob)
{
    fractions res;
    res.denomenator = denomenator*(ob.denomenator);
    res.numerator = (numerator*ob.denomenator)-(ob.numerator*denomenator);
    return res;
}
fractions fractions:: operator*(fractions ob)
{
    fractions res;
    res.denomenator = denomenator*(ob.denomenator);
    res.numerator = numerator * ob.numerator;
    return res;
}
void fractions:: operator==(fractions ob)
{
    if((numerator == ob.numerator) && (denomenator == ob.denomenator))
        cout<<"Proper fractions"<<endl;
    else
        cout<<"Not proper fractions"<<endl;
}
void fractions::input()
{
    cout<<"Enter the numerator and denomenator"<<endl;
    cin>>numerator>>denomenator;
}
void fractions::display()
{
    cout<<"Numerator is: "<<numerator<<" and denomenator is: "<<denomenator<<endl;
}
void fractions::minimise()
{
    int mn;
    if(this->numerator < this->denomenator)
        mn = this->numerator;
    else
        mn = this->denomenator;
    int h = 1;
    for(int i = 1; i <= mn; i++)
    {
        if((this->numerator % i == 0) && (this->denomenator % i == 0))
            h = i;
    }
    this->numerator = this->numerator/h;
    this->denomenator = this->denomenator/h;
}
int main()
{
    fractions ob1;
     fractions ob2;
    ob1.input();
     ob2.input();
     fractions ob3 = ob1 + ob2;
     ob3.display();
    // fractions ob4 = ob1 - ob2;
    // ob4.display();
    // ob1 == ob2;
    ob1.minimise();
    ob1.display();

    return 0;
}
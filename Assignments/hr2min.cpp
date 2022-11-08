#include<iostream>
using namespace std;
class Minutes;
class Hour
{
    int hr;
    public:
        Hour();
        Hour(int);
        int get();
        Hour(Minutes& obj);
        void display();
};

Hour::Hour()
{
    hr = 0;
}
Hour::Hour(int a)
{
    hr = a;
}

int Hour::get()
{
    return hr;
}
void Hour::display()
{
    cout<<"Hour is : "<<hr<<endl;
}

class Minutes
{
    int x;
    public:
        Minutes();
        Minutes(int);
        Minutes(Hour& obj);
        void display();
        int getm();
        // operator int()//user defined to primitive
        // {
        //     return x;
        // }
};
Minutes::Minutes()
{
    x = 0;
}
Minutes::Minutes(int a)
{
    x = a;
}
Minutes::Minutes(Hour& obj)
{
    x = obj.get();
    x = x*60;
}
int Minutes::getm()
{
    return x;
}
void Minutes::display()
{
    cout<<"Minutes is : "<<x<<endl;
}
Hour::Hour(Minutes& ob)
{
    hr = ob.getm();
    hr = hr/60;
}
int main()
{
    Hour ob(1);
    Minutes ob1(120);
    Minutes res = (Minutes)ob;
    res.display();
    Hour res1 = (Hour)ob1;
    res1.display();
    return 0;
}
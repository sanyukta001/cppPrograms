#include<iostream>
using namespace std;
class dates
{
    int d,m,y;
    public:
        dates();
        dates(int,int,int);
        dates operator-(int);
        dates operator+(int);
        int operator-(dates ob);
        void input();
        void display();
};
dates::dates()
{
    d = 0;
    m = 0;
    y = 0;
}
dates::dates(int a, int b, int c)
{
    d = a;
    m = b;
    y = c;
}
void dates :: input()
{
    cout<<"Enter the dates in dd,mm,yyyy format"<<endl;
    cin>>d>>m>>y;
}
void dates::display()
{
    cout<<"Date: "<<d<<"."<<m<<"."<<y<<endl;
}
dates dates::operator-(int n)
{
    dates res;
    res.d = d;
    res.m = m;
    res.y = y;
    while(n)
    {
        if(n>=365)
        {
            res.y = y - 1;
            n = n - 365;
        }
        if(n>=30)
        {
            res.d = d ;
            res.m = m - 1;
            n = n - 30;
        }
        else
        {
            res.d = d - n;
            if(res.d <= 0)
            {
                res.d = 30 - res.d;
                res.m -= 1;
            }
            n = n - n;
        }
    }
    return res;
}
dates dates::operator+(int n)
{
    dates res;
    res.d = d;
    res.m = m;
    res.y = y;
    while(n)
    {
        if(n>=365)
        {
            res.y = y + 1;
            n = n - 365;
        }
        if(n>=30)
        {
            res.d = d ;
            res.m = m + 1;
            n = n - 30;
        }
        else
        {
            res.d = d + n;
            if(res.d>30)
            {
                res.d -= 30;
                res.m += 1;
            }
            n = n - n;
        }
    }
    return res;   
}
int dates::operator-(dates ob)
{
    int diff;
    diff = (m*30+d+y*365)-(ob.m*30+ob.d+ob.y*365);
    return diff;
}
int main()
{
    dates ob1;
    dates ob2;
    ob1.input();
    ob2.input();
    dates res1 = ob1 + 20;
    res1.display();
    dates res2 = ob2 - 10;
    res2.display();
    int x = ob1 - ob2;
    cout<<"Value is: "<<x<<endl;
    return 0;
}
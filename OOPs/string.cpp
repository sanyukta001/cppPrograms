#include<iostream>
using namespace std;
class String
{
    string s1;
    public:
        String();
        String(string a);
        String operator+(String ob);
        friend ostream& operator<<(ostream& out, const String& ob);
};
String::String()
{
    this->s1 = "";
}

String::String(string a)
{
    this->s1 = a;
}

String String:: operator+(String ob)
{
    int min;
    String res;
    string x = "";
    if(this->s1.length() > ob.s1.length())
        min = ob.s1.length();
    else
        min = this->s1.length();

    for (int i = 0; i < min; i++)
    {
        x = x + this->s1.at(i) + ob.s1.at(i);
    }
    if(this->s1.length() > ob.s1.length())
    {
        for(int i = min; i < this->s1.length();i++)
            x = x + this->s1.at(i);
    }
    else if(this->s1.length() < ob.s1.length())
    {
        for(int i = min; i < ob.s1.length();i++)
            x = x + ob.s1.at(i);
    }

    res.s1 = x;
    return res;   
}

ostream& operator<<(ostream& out, const String& ob)
{
    out<<"The result is"<<endl;
    for (int i = 0; i < ob.s1.length(); i++)
    {
        out<<ob.s1.at(i);
    }
    return out;
}

int main()
{
    string a = "Sanyukta";
    string b = "Mishra";
    String s1(a);
    String s2(b);
    String s3 = s1 + s2;
    cout<<s3<<endl;
    
    return 0;
}
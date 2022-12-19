#include <iostream>
#include <string>
using namespace std;
class Strings
{
    char *s;
    int l;

public:
    Strings();
    Strings(int i);
    Strings(string st);
    Strings(const Strings &ob);
    Strings operator+(Strings &ob);
    void operator==(string x);
    void input();
    void display();
};
Strings::Strings()
{
    l = 100;
    s = new char[100];
}
Strings::Strings(int i)
{
    int j = 0;
    string str = to_string(i);
    l = str.length();
    s = new char[l];
    while (j < l)
    {
        s[j] = str[j];
        j++;
    }
}
Strings::Strings(string st)
{
    int i = 0;
    l = st.length();
    s = new char[st.length()];
    while (i < st.length())
    {
        s[i] = st[i];
        i++;
    }
}
Strings::Strings(const Strings &ob)
{
    l = ob.l;
    for (int i = 0; i < l; i++)
        s[i] = ob.s[i];
}
Strings Strings::operator+(Strings &ob)
{
    Strings res;
    res.l = l + ob.l;
    int i = 0;
    int j = 0;
    while (i < l)
    {
        res.s[i] = s[i];
        i++;
    }
    while (j < ob.l)
    {
        res.s[i] = ob.s[j];
        i++;
        j++;
    }
    return res;
}
void Strings:: operator==(string x)
{
    int f = 1;
    if(x.length() != l)
    {
        cout<<"Not equal"<<endl;
        return;
    }
    for(int i = 0; i < x.length();i++)
    {
        if(x[i] != s[i])
        {
            f = 0;
            break;
        }
    }
    if(f == 0)
        cout<<"Not equal"<<endl;
    else
        cout<<"Equal"<<endl;
}
void Strings::input()
{
    cin >> l;
    cin >> s;
}
void Strings::display()
{
    int i = 0;
    while (i != l)
    {
        cout << s[i];
        i++;
    }
}
int main()
{
    // Strings a,b;
    // a.input();
    // b.input();
    // Strings c;
    // c=a+b;
    // c.display();
    cout << "Enter a string";
    string str;
    cin >> str;
    Strings ob = str;
    // ob.display();
    int p;
    cout << "Enter a no.";
    cin >> p;
    Strings ob1 = p;
    // ob1.display();
    Strings res = ob + ob1;
    res.display();
    return 0;
}

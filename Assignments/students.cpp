#include <iostream>
using namespace std;
class student
{
    int roll;
    string name;
    int* marks;
    int total;
    public:
    student();
    void input();
    void display();
    void modify();
};
student :: student()
{
    roll = 0;
    name = "";
    total = 0;
    marks = new int[3];
    
}
void student::input()
{
    cout<<"Enter roll"<<endl;
    cin>>roll;
    cout<<"Enter name"<<endl;
    cin>>name;
    cout<<"Enter the marks"<<endl;
    for(int i = 0; i < 3; i++)
    {
        cin>>marks[i];
        total += marks[i];
    }
}
void student:: display()
{
    cout<<"ROLL IS:"<<roll<<endl;
    cout<<"NAME IS:"<<name<<endl;
    cout<<"MARKS ARE :"<<endl;
    for(int i = 0; i < 3; i++)
    {
        cout<< marks[i]<<" "<<endl;
    }
    cout<<"TOTAL IS:"<<total<<endl;
    
}
void student:: modify()
{
    int x,m;
    cout<<"Enter 1 or 2 or 3 for modifying marks"<<endl;
    cin>>x;
    cout<<"Enter the updated marks"<<endl;
    cin>>m;
    marks[x-1] = m;
}
int main()
{
    int n;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    student *arr;
    arr = new student [n];
    for(int i = 0; i < n; i++)
    {
        arr[i].input();
    }
    for(int i = 0 ; i < n ;i++)
    {
        arr[i].display();
    }
    
    return 0;
}
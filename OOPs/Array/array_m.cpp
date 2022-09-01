#include "array.h"

int main()
{
    int s;
    cout<<"Enter the array size"<<endl;
    cin>>s;
    Array a1(s);
    Array a2(s);
    Array a3;
    cout<<"Input for first array"<<endl;
    a1.take_input();
    cout<<"Input for second array"<<endl;
    a2.take_input();
    a3 = a1.add(a2);
    cout<<"The Resultant array is"<<endl;
    a3.display();
    return 0;
}
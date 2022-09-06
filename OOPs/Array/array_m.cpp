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
    //a1.take_input();
    cin>>a1;
    cout<<"Input for second array"<<endl;
    //a2.take_input();
    cin>>a2;
    //a3 = a1.add(a2);
    a3 = a1 + a2;
    //cout<<"The Resultant array is"<<endl;
    //a3.display();
    cout<<a3;
    
    return 0;
}
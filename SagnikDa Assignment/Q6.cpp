//Reverse a number
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;
    int rev = 0;
    while(x>0)
    {
        rev = rev*10 + (x%10);
        x = x / 10;
    }
    cout<<"The reversed number is "<<rev<<endl;
}
//nb=
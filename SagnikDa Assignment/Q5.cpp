//check if number is prime
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;
    int flag = 0;
    for(int i = 2; i <= x/2; i++)
    {
        if(x%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0 || x == 2)
        cout<<"prime"<<endl;
    else
        cout<<"not prime"<<endl;
}
//nb=
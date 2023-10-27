//Maximum of three numbers
#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout<<"Enter 3 numbers"<<endl;
    cin>>x>>y>>z;
    int m = (x>y)?((x>z)?x:z):((y>z)?y:z);
    cout<<"Maximum is "<<m<<endl;
}
//nb=
//program to find the average of an array of numbers.
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int x[size];
    int sum = 0;
    cout<<"Enter the array elements"<<endl;
    for(int i = 0; i < size;i++)
    {
        cin>>x[i];
        sum += x[i];
    }
    cout<<"The sum is "<<sum/size<<endl;
}
//nb=
//program to reverse an array.
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
        cin>>x[i];
    int i = 0, j = size-1;
    while(i<j)
    {
        int t = x[i];
        x[i] = x[j];
        x[j] = t;
        i++;
        j--;
    }
    cout<<"the reversed array is "<<endl;
    for(int i = 0; i < size; i++)
    {
        cout<<x[i]<<" ";
    }
}
//nb=
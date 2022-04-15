#include <iostream>

using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The array elements are:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Element at position "<<(i+1)<<" is "<<*(arr+i)<<endl;
    }
    
}
//find the second largest element in an array.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    int target;
    cout<<"Enter the size"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements"<<endl;
    for(int i = 0; i < size; i++)
        cin>>arr[i];
    sort(arr, arr + size);
    cout<<"Second largest"<<arr[size-2];
}
//nb=
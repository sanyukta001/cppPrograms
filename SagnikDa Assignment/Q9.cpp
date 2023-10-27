//search for an element in an array.
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
    cout<<"Enter the element to be searched"<<endl;
    cin>>target;
    int u = size-1;
    int l = 0;
    int mid = (u + l)/2;
    while(l<=u)
    {
        mid = (u + l)/2;
        if(arr[mid] == target)
        {
            cout<<"Search found"<<endl;
            break;
        }
        else if(arr[mid] < target)
            l = mid + 1;
        else
            u = mid - 1;
    }
}
//nb=
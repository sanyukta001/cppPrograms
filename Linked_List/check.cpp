/*Given a sorted array and a number key, find the index of the first and last occurrence of the key in the array.

If the key is not present, return [-1, -1].

Expected Time Complexity: O(log n)
eg.
Array: [1, 2, 3, 3, 3, 4, 4, 5]
Number: 3
Answer: [2, 4]

[1, 2, 3, 3, 3, 4, 4, 5]
Number: 6
Answer: [-1, -1]
*/
/*#include <iostream>
using namespace std;
int main()
{
    int arr[50] , n ,  key , start = -1 , last = -1;
    cout<<"Enter size: ";
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter number: ";
        cin>>arr[i];
    }
    cout<<"Enter key: ";
    cin>>key;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == key)
        {
            start = i;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--)
    {
        if(arr[i] == key)
        {
            last = i;
            break;
        }
    }
    if(start == -1 && last == -1)
        cout<<"["<<start<<","<<last<<"]";
    else
        cout<<"["<<start<<","<<last<<"]";
    return 0;
}*/

#include <iostream>
using namespace std;
int main()
{
    int arr[50] , n = 0, index = -1 , key = 0;
    cout<<"Enter size: ";
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter number: ";
        cin>>arr[i];
    }
    cout<<"Enter key: ";
    cin>>key;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == key)
        {
           cout<< i;
           break;
        }
        else if(key<arr[i])
        {
            cout<<i;
            break;
        }
        else if(key>arr[i] && i == n-1)
        {
            cout<<i+1;
            break;
        }
    }
    // if(index == -1)
    // {
    //     //n++;
    //     for(int i = 0 ; i < n ; i++)
    //     {
    //         if(key>arr[i])
    //         {
    //             arr[i+1] = key;
    //             index = i+1;
    //         }
    //     }
    // }
    //cout<<"index = "<<index;
    return 0;
}
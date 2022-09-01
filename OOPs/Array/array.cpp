#include "array.h"

Array::Array(int size)
{
    this->size = size;
    arr = new int[size];
}

Array::Array()
{
    size = 5;
    arr = new int[size];
}

void Array::take_input()
{
    cout<<"Enter "<<size<<" elements of array"<<endl;
    for (int i = 0; i < size; i++)
        cin>>arr[i];
}

void Array::display()
{
    cout<<"The array is:"<<endl;
    for (int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
}

Array Array::add(Array temp)
{
    Array obj(temp.size);
    for(int i = 0; i < temp.size; i++)
    {
        obj.arr[i] = this->arr[i] + temp.arr[i];
    }
    return obj;
}
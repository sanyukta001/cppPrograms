#include<bits/stdc++.h>
using namespace std;
int getInsertPosition(vector<int> &arr, int key)
{
    int c=0,pos;
	for(int i = 0; i < arr.size(); i++)
	{
		if(arr[i] == key)
			return i;
		else if(arr[i] > key)
			return i;
		else if(arr[i] < key && i == arr.size()-1)
			return i+1;
	}
}
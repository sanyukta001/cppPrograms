#include<bits/stdc++.h>
using namespace std;
vector<int> searchRange(vector<int> &arr, int key) 
{
	vector<int> res;
    int f1 = 0 , f2 = 0;
    for(int i = 0; i < arr.size(); i++)
	{
		if(arr[i] == key)
		{
			res.push_back(i);
			f1 = 1;
			break;
		}
	}
	for(int i = arr.size()-1; i >=0; i--)
	{
		if(arr[i] == key)
		{
			res.push_back(i);
			f2 = 1;
			break;
		}
	}
	if(f1 == 0 && f2 == 0)
	{
		res.push_back(-1);
		res.push_back(-1);
	}
	return res;
}
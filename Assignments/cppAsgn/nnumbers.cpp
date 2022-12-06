#include<bits/stdc++.h>
using namespace std;
int getNegativeNumbersCount(vector<int> &arr) 
{
    int c=0;
	for(int i = 0; i <arr.size() ; i++)
	{
		if(arr[i]<0)
			c = c+1;
	}
	return c;
}
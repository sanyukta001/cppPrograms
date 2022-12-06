#include<bits/stdc++.h>
using namespace std;
int countfactor(int n)
{
    int count = 0;
    for(int i = 2; i <= n/2; i++)
    {
        if(n%i == 0)
         {
            count++;
             break;
          }
    }
    return count;
}

vector<int> primesUptoN(int n) 
{
    vector<int> prime;
    for(int i=2; i <= n; i++)
    {
        if(countfactor(i) == 0)
            prime.push_back(i);
    }
    return prime;
}
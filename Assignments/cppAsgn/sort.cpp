#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    string frequencySort(string s) 
    {
         int n = s.length();
        string s1="";
        map<char,int>m;
       
        vector<pair<int,char>>v;
        
        for(int i = 0 ; i < n ; i++)
        {
            m[s[i]]++;
        }
        for(auto itr = m.begin();itr!=m.end();itr++)
        {
            
            v.push_back({itr->second,itr->first});
        }
        sort(v.begin(),v.end(),greater<pair<int,char>>());
        for(auto it = v.begin();it!=v.end(); it++)
        {
            s1 = s1+string(it->first,it->second);
        }
       
    
       return s1;
        // map<char,int> m;
        // map<char,int>::iterator itr;
        // string res="";
        // for(int i = 0; i<s.length();i++)
        // {
        //     int  c = 0;
        //     for(int j = 0; j<s.length();j++)
        //         if(s[i] == s[j])
        //             c++;
        //     m[s[i]] = c;
        // }
        // for(itr = m.begin(); itr!=m.end(); ++itr)
        // {
        //     string r = "";
        //     for(int i = 1; i <= itr->second;i++)
        //         r = r + itr->first;
        //     res = r + res;
        // }
        // return res;
    }
};

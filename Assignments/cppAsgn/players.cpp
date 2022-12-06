#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) 
    {
        vector<int> win,w,w1;
        vector<int> los,l;
        vector<vector<int>> answer;
        int x,y,z;
        for(int i =0;i<matches.size();i++)
        {
            win.push_back(matches[i][0]);
            los.push_back(matches[i][1]);
        }
        for(int i =0; i<win.size();i++)
        {
            if(search(win[i],los)==0 )
                w.push_back(win[i]);
        }
        for(int i =0;i<los.size();i++)
        {
            if(searchcount(los[i],los) == 1)
                l.push_back(los[i]);
        }
        sort(l.begin(),l.end());
        sort(w.begin(),w.end());
        w.erase( unique( w.begin(), w.end() ), w.end() );
        answer.push_back(w);
        answer.push_back(l);
        return answer;
    }
    int search(int x,vector<int> los)
    {
        for(int i = 0;i < los.size();i++)
        {
            if(los[i] == x)
                return 1;
        }
        return 0;
    }
    int searchcount(int x,vector<int> los)
    {
        int count = 0;
        for(int i =0; i<los.size();i++)
        {
            if(los[i] == x)
                count++;
        }
        if(count == 1)
            return 1;
        else
            return 0;
    }
};
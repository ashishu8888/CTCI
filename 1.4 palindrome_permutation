#include <bits/stdc++.h> 
bool palindromeString(string s) {
    // Write your code here.
    map<int,int> mp;
    int o = 0;
    for(auto x : s)
    {
        mp[x]++;
        if(mp[x]%2 == 1)
        {
            o++;
        }
        else{
            o--;
        }
    }

    return o<=1;
}

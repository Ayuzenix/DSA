#include<bits/stdc++.h>
using namespace std;

// Problem:Number of substring containing all three Numbers
// Platform:Leetcode

class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int l=0;
        int r=0;
        int count=0;
        vector<int>mp(3,0);
        while(r<n){
            mp[s[r]-'a']++;
            while(mp[0]>=1 && mp[1]>=1 && mp[2]>=1){
                count=count+(n-r);
                mp[s[l]-'a']--;
                l++;
            }
            r++;
        }
        return count;
    }
};

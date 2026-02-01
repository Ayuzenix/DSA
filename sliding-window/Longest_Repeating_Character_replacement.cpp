#include<bits/stdc++.h>
using namespace std;

// Problem:Longest repeating Character replacement
// Platform:Leetcode

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int l=0;
        int r=0;
        int maxlen=0;
        int maxfreq=0;
        unordered_map<int,int>mp;
        while(r<n){
            mp[s[r]]++;
            maxfreq=max(maxfreq,mp[s[r]]);
            while((r-l+1)-maxfreq>k){
                mp[s[l]]--;
                l++;
            }
            maxlen=max(maxlen,(r-l+1));
            r++;
        }
        return maxlen;
    }
};

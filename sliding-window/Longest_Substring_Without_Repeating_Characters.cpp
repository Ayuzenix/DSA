#include<bits/stdc++.h>
using namespace std;

// Problem:Longest Substring Without Repeating Characters
// Platform:Leetcode

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int l=0;
        int r=0;
        unordered_map<int,int>mp;
        int maxlen=INT_MIN;
        while(r<n){
             mp[s[r]]++;
             while(mp[s[r]]>1){
                mp[s[l]]--;
                l++;
             }
             maxlen=max(maxlen,(r-l+1));
             r++;
        }
        if(maxlen==INT_MIN){
            return 0;
        }
        return maxlen;

    }

};

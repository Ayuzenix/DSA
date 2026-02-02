#include<bits/stdc++.h>
using namespace std;

// Problem:Minimum Window Substring 
// Platform:Leetcode 

class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        int count_req=m;
        vector<int>mp(126,0);
        int minlen=INT_MAX;
        int l=0,r=0,st=0;
        for(int i=0;i<m;i++){
            mp[t[i]]++;
        }
        while(r<n){
            if(mp[s[r]]>=1){
                count_req--;
            }
            mp[s[r]]--;
            while(count_req==0){
                int len=(r-l+1);
                if(len<minlen){
                    minlen=len;
                    st=l;
                }
                mp[s[l]]++;
                if(mp[s[l]]>=1){
                    count_req++;
                }
                l++;
            }
            r++;
        }
        if(minlen==INT_MAX){
            return "";
        }
        return s.substr(st,minlen);
    }
};

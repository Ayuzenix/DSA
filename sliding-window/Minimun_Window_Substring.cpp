#include<bits/stdc++.h>
using namespace std;

// Problem:Minimun Window Substring (good approach but this will give memory limit exceed)
// Platoform:Leetcode

class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        unordered_map<char,int>mp;
        int count_req=m;
        for(int i=0;i<m;i++){
            mp[t[i]]++;
        }
        int l=0;
        int r=0;
        int minlen=INT_MAX;
        string ans="";
        while(r<n){
            if(mp[s[r]]>=1){
                count_req--;
            }
            mp[s[r]]--;
            while(count_req==0){
                int len=(r-l+1);
                if((len)<minlen){
                    minlen=len;
                    ans=s.substr(l,(r-l+1));
                }
                 
                 mp[s[l]]++;
                 if(mp[s[l]]>=1){
                    count_req++;
                 }
                 l++;
            }
            r++;
        }
        return ans;
    }
};

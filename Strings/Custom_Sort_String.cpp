#include<bits/stdc++.h>
using namespace std;

// Problem:Custom Sort String
// Platform:Leetcode

class Solution {
public:
    string customSortString(string order, string s) {
           int n=order.size();
           int m=s.size();
           unordered_map<char,int>mp1;
           unordered_map<char,int>mp2;
           for(int i=0;i<m;i++){
            mp1[s[i]]++;
           }
           string ans="";
           for(int i=0;i<n;i++){
            if(mp1.find(order[i])!=mp1.end()){
                ans=ans.append(mp1[order[i]],order[i]);
            }
            mp2[order[i]]++;
           }
           for(int i=0;i<m;i++){
            if(mp2.find(s[i])==mp2.end()){
                ans=ans+s[i];
            }
           }
           return ans;
    }
};

#include<bits/stdc++.h>
using namespace std;

// Problem:Sort Characters by Frequency
// Platform:Leetcode

class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        vector<pair<int,int>>result;
        for(auto &it:mp){
            result.push_back({it.first,it.second});
        }
        sort(result.begin(),result.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
        string ans="";
        for(auto &it:result){
            ans.append(it.second,it.first);
        }
        return ans;
    } 
};

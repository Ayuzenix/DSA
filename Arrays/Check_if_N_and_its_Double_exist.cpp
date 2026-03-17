#include<bits/stdc++.h>
using namespace std;

// Problem:Check if N and its Double exist
// Platform:Leetcode

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
         int n=arr.size();
         unordered_map<int,int>mp;
         for(int i=0;i<n;i++){
            mp[arr[i]]=i;
         }
         for(int i=0;i<n;i++){
             if(mp.find(2*arr[i])!=mp.end() && mp[2*arr[i]]!=i){
                return true;
             }
         }
         return false;
    }
};

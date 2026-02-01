#include<bits/stdc++.h>
using namespace std;

// Problem:Subset
// Platform:Leetcode

class Solution {
public:
    vector<vector<int>>result;
    void solve(vector<int>&nums,vector<int>temp,int n,int idx){
        if(idx==n){
            result.push_back(temp);
            return ;
        }
        temp.push_back(nums[idx]);
        solve(nums,temp,n,idx+1);
        temp.pop_back();
        solve(nums,temp,n,idx+1);
        return ;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        int n=nums.size();
        solve(nums,temp,n,0);
        return result;
    }
};

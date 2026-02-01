#include<bits/stdc++.h>
using namespace std;

// Problem:Subset II
// Platform:Leetcode

class Solution {
public:
    vector<vector<int>>result;
    void solve(vector<int>&nums,vector<int>&temp,int n,int idx){
        result.push_back(temp);

        for(int i=idx;i<n;i++){
            if(i>idx && nums[i]==nums[i-1]){
                continue;
            }else {
                temp.push_back(nums[i]);
                solve(nums,temp,n,i+1);
                temp.pop_back();
            }
            
        }
        return ;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>temp;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        solve(nums,temp,n,0);
        return result;
    }
};

#include<bits/stdc++.h>
using namespace std;

// Problem:Combination Sum
// Platform:Leetcode

class Solution {
public:
    vector<vector<int>>result;
    void solve(vector<int>&candidates,vector<int>&temp,int target,int n,int idx){
        if(target==0){
            result.push_back(temp);
            return ;
        }
        if(target<0 || idx==n){
            return ;
        }
        //Taking Elements
        temp.push_back(candidates[idx]);
        solve(candidates,temp,target-candidates[idx],n,idx);
        temp.pop_back();
        // Not Taking Elements
        solve(candidates,temp,target,n,idx+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        int n=candidates.size();
        solve(candidates,temp,target,n,0);
        return result;
    }
};

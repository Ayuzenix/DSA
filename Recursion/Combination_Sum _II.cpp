#include<bits/stdc++.h>
using namespace std;

// Problem:Combination Sum II;
// Platform:Leetcode

class Solution {
public:
    vector<vector<int>>result;
    void solve(vector<int>& candidates,vector<int>& temp,int target,int n,int idx){
        if(target==0){
            result.push_back(temp);
            return ;
        }
        if(target<0 || idx==n){
            return ;
        }
        for(int i=idx;i<n;i++){
            if(i>idx && candidates[i]==candidates[i-1]){
                continue;
            }else{
                temp.push_back(candidates[i]);
                solve(candidates,temp,target-candidates[i],n,i+1);
                temp.pop_back();
            }
        }
        return ;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        int n=candidates.size();
        solve(candidates,temp,target,n,0);
        return result;
    }
};

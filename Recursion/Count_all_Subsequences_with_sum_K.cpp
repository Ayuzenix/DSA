#include<bits/stdc++.h>
using namespace std;

// Problem:Count all Subsequences with Sum K
// Platform:Take u Forward

class Solution{
    public: 
    void solve(vector<int>&nums,int&count,int idx,int k,int sum){
        if(idx==nums.size()){
            if(sum==k){
                count++;
            }
            return ;
        }
        solve(nums,count,idx+1,k,sum+nums[idx]);
        solve(nums,count,idx+1,k,sum);
        return ;
    }   	
    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
        int count=0;
        solve(nums,count,0,k,0);
        return count;

    }
};

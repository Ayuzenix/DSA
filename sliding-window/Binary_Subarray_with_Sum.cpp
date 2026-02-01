#include<bits/stdc++.h>
using namespace std;

// Problem:Binary Subarray with Sum
// Platform:Leetcode

class Solution {
public:
    int solve(vector<int>& nums,int goal){
        int n=nums.size();
        int l=0;
        int r=0;
        int sum=0;
        int count=0;
        while(r<n){
            sum=sum+nums[r];
            while( l<=r && sum>goal){
                sum=sum-nums[l];
                l++;
            }
            count=count+(r-l+1);
            r++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int finalans=solve(nums,goal)-solve(nums,goal-1);
        return finalans;
    }
};

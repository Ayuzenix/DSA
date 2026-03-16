#include<bits/stdc++.h>
using namespace std;

// Problem:Number of Subarray with Bounded Minimun
// Platform:Leetcode

class Solution {
public:
    int solve(vector<int>&nums,int range){
        int n=nums.size();
        int count=0,l=0,r=0;
        int maxi=INT_MIN;
        while(r<n){ 
            maxi=nums[r];
            if(maxi>range){
                l=r+1;
            }
            if(l<=r){
                count=count+(r-l+1);
            }
            r++;
        }
        return count;
    }
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int ans=solve(nums,right)-solve(nums,left-1);
        return ans;
    }
};

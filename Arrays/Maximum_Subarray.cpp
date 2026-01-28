#include<bits/stdc++.h>
using namespace std;

// Problem:Maximum Subarray Sum
// Platform:leetcode

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0];
        int maxi=nums[0];
        for(int i=1;i<n;i++){
            sum=max(nums[i],nums[i]+sum);
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};

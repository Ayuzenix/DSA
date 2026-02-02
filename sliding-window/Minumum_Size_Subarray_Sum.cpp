#include<bits/stdc++.h>
using namespace std;

// Problem:Minimun Size Subarray Sum
// Platform:Leetcode

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size(),l=0,r=0,minlen=INT_MAX;
        int sum=0;
        while(r<n){
              sum=sum+nums[r];
              while(sum>=target){
                minlen=min(minlen,(r-l+1));
                sum=sum-nums[l];
                l++;
              }
              r++;
        }
        if(minlen==INT_MAX){
            return 0;
        }
        return minlen;
    }
};

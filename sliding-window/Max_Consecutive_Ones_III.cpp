#include<bits/stdc++.h>
using namespace std;

// Problem:Max Consecutive Ones III
// Platform:Leetcode

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0;
        int r=0;
        int zeros=0;
        int maxlen=INT_MIN;
        while(r<n){
            if(nums[r]==0){
                zeros++;
            }
            while(zeros>k){
                if(nums[l]==0){
                    zeros--;
                }
                l++;
            }
            maxlen=max(maxlen,(r-l+1));
            r++;
        }
        if(maxlen==INT_MIN){
            return 0;
        }
        return maxlen;
    }
};

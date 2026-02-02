#include<bits/stdc++.h>
using namespace std;

// Problem:Longest Subarray of Ones after deleting One Element
// Platform:Leetcode

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size(),l=0,r=0,zeros=0;
        int maxlen=INT_MIN;
        while(r<n){
            if(nums[r]==0){
                zeros++;
            }
            while(zeros>1){
                if(nums[l]==0){
                    zeros--;
                }
                l++;
            }
            maxlen=max(maxlen,(r-l)); //-->Must Delete one Element 
            r++;
        }
        if(maxlen==INT_MIN){
            return 0;
        }
        return maxlen;
    }
};

#include<bits/stdc++.h>
using namespace std;

// Problem:Maximum Erase Value 
// Platform:Leetcode

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size(),l=0,r=0,sum=0,max_sum=0;
        unordered_map<int,int>mp;
        while(r<n){
            sum=sum+nums[r];
            mp[nums[r]]++;
            while(mp[nums[r]]>1){
                sum=sum-nums[l];
                mp[nums[l]]--;
                l++;
            }
            max_sum=max(max_sum,sum);
            r++;
        }
        return max_sum;
    }
};

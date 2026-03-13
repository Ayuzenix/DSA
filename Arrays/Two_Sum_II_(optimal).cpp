#include<bits/stdc++.h>
using namespace std;

// Problem:Two Sum-II
// Platform:Leetcode

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
           int n=nums.size();
           unordered_map<int,int>mp;
           for(int i=0;i<n;i++){
            mp[nums[i]]=i;
           }
           for(int i=0;i<n;i++){
            int sum=nums[i];
            if(mp[target-sum]!=i && mp.find(target-sum)!=mp.end()){
                return {mp[target-sum],i};
            }
           }
           return {-1,-1};
    }
};

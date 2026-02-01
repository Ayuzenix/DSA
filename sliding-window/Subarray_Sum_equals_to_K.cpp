#include<bits/stdc++.h>
using namespace std;

// Problem:Subarray Sum equals to K
// Platform:Leetcode

class Solution {
public: //Prefix Sum
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0;
        int r=0;
        int sum=0;
        int count=0;
        unordered_map<int,int>mp;
        mp[0]=1; //-->since Initially we has sum as zero
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            int gama=sum-k;
            count=count+mp[gama];
            mp[sum]++;
        }
        return count;
    }
};

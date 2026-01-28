#include<bits/stdc++.h>
using namespace std;

// Problem:Subarray Sum equals to K
// Platform:Leetcode

class Solution {
public: //-->Lets try the most optimal solution 
    int subarraySum(vector<int>& nums, int k) {
    int n=nums.size();
    int count=0;
    map<int,int>mp;
    mp[0]=1;
    int prefixSum=0;
    for(int i=0;i<n;i++){
        prefixSum=prefixSum+nums[i];
        int rem=prefixSum-k;
        count=count+mp[rem];
        mp[prefixSum]++;
    }
    return count;
    }
};

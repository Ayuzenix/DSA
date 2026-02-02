#include<bits/stdc++.h>
using namespace std;

// Problem:K radius Subarray averages
// Platform:Leetcode

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        long long n=nums.size();
        long long l=0,r=0,sum=0;
        vector<int>ans(n,-1);
        while(r<n){
            sum=sum+nums[r];
            if((r-l+1)==2*k+1){
                ans[l+k]=sum/(r-l+1);
                sum=sum-nums[l];
                l++;
            }
            r++;
        }
        return ans;
    }
};

#include<bits/stdc++.h>
using namespace std;

// Problem:Count Number of NiceSubarray
// Platform:Leetcode

class Solution {
public:
    int solve(vector<int>& nums,int k){
        int n=nums.size();
        int l=0;
        int r=0;
        int count_odd=0;
        int odd=0;
        while(r<n){
            if(nums[r]%2!=0){
                odd++;
            }
            while(l<=r && odd>k){
                if(nums[l]%2!=0){
                    odd--;
                }
                l++;
            }
            count_odd=count_odd+(r-l+1);
            r++;
        }
        return count_odd;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
    }
};

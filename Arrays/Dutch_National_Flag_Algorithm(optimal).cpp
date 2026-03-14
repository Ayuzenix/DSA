#include<bits/stdc++.h>
using namespace std;

// Problem:Dutch National Flag Algorithm
// Platform:Leetcode

class Solution {
public:
    void sortColors(vector<int>& nums) {
         int n=nums.size();
         int l=0,r=n-1,idx=0;
         while(idx<=r){
            if(nums[idx]==2){
                swap(nums[idx],nums[r]);
                r--;
            }else if(nums[idx]==0){
                swap(nums[idx],nums[l]);
                idx++;
                l++;
            }else if(nums[idx]==1){
                idx++;
            }
         }
         return ;
    }
};

#include<bits/stdc++.h>
using namespace std;

// Problem:Find Pivot Index
// Platform:leetcode

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        int c_sum=0;
        for(int i=0;i<n;i++){
            c_sum=c_sum+nums[i];
            if(c_sum-nums[i]==(sum-c_sum)){
                return i;
            }
        }
        return -1;
    }
};

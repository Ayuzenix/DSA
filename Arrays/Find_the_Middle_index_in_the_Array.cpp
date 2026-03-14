#include<bits/stdc++.h>
using namespace std;

// Problem:Find the Middle index in Array 
// Platform:Leetcode

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int f_sum=0;
        for(int i=0;i<n;i++){
            f_sum+=nums[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(sum==(f_sum-sum-nums[i])){
                return i;
            }
            sum=sum+nums[i];
        }
        return -1;
    }
};

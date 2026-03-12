#include<bits/stdc++.h>
using namespace std;

// Problem:Running Sum of 1D Array
// Platform:Leetcode

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
           int n=nums.size();
           vector<int>prefix(n,0);
           prefix[0]=nums[0];
           for(int i=1;i<n;i++){
            prefix[i]=nums[i]+prefix[i-1];
           }
           return prefix;
    }
};

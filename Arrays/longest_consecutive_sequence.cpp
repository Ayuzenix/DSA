#include<bits/stdc++.h>
using namespace std;

// Problem:Longest Consecutive Sequence
// Platform:leetcode
// Needs to be optimize later
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        int maxlen=1;
        int count=1;
        int lastsmaller=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]-1==lastsmaller){
                count++;
                lastsmaller=nums[i];
            }else if(nums[i]!=lastsmaller){
                count=1;
                lastsmaller=nums[i];
            }
            maxlen=max(maxlen,count);
        }
        return maxlen;
    }
};

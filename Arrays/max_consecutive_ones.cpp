#include<bits/stdc++.h>
using namespace std;
// problem:Max Consecutive Ones 
// platform:leetcode
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;
        int maxlen=INT_MIN;
        while(r<n){
            if(r<n && nums[r]==0){
               l=r+1;
            }
            if(l<=r && nums[r]!=0){
                maxlen=max(maxlen,r-l+1);
            }
            r++;
        }
        if(maxlen==INT_MIN){
            return 0;
        }
        return maxlen;
    }
};

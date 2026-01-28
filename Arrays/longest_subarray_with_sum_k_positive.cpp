#include<bits/stdc++.h>
using namespace std;
// problem:longest subarray with sum k (positive only)
// platform:take u forward

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
       int n=nums.size();
       int l=0;
       int r=0;
       int sum=0;
       int maxlen=INT_MIN;
       while(r<n){
        sum=sum+nums[r];
        while(sum>k){
            sum=sum-nums[l];
            l++;
        }
        maxlen=max(maxlen,(r-l+1));
        r++;
       }
       if(maxlen==INT_MIN){
        return 0;
       }
       return maxlen;
    }
};
